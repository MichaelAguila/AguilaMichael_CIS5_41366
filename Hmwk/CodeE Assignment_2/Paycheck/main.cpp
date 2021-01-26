/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 14, 2021, 3:29 PM
 * Purpose:  Calculate gross pay
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format library

using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   payRate,    //Rate of pay in $s
            hrsWrk,     //Amount of time worked in hours
            gross;      //Total amount gross pay in $s            
    
    //Initialize Variables
    payRate=0;
    hrsWrk=0;
    gross=0;
    
    //Display Inputs/Outputs
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>payRate>>hrsWrk;
    
    //Map Inputs to Outputs -> Process
    if(hrsWrk>=40)
        gross = (payRate*40) + (payRate*(hrsWrk-40)*2);
    else
        gross = payRate*hrsWrk;
    
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $ "<<gross;
    
    //Exit the Program - Cleanup
    return 0;
}