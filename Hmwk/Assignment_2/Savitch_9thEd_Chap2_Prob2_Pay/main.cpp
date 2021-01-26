/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 14, 2021, 4:40 PM
 * Purpose:  Figure out employees retroactive pay
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const unsigned int PERCONV=100; //Percentage conversion

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   annS,       //Annual salary in dollars
            monS,       //Monthly salary in dollars
            retPer,     //Retroactive pay increase in percentage
            retPayM,    //Retroactive pay per month in dollars
            retPayT,    //Retroactive pay total
            newMS,      //New monthly salary in dollars
            newYS;      //New yearly salary in dollars
    
    //Initialize Variables
    retPer=7.60f;
    annS=monS=retPayM=newMS=newYS=0;
            
    //Map Inputs to Outputs -> Process
    cout<<"Input previous annual salary."<<endl;
    cin>>annS;
    monS=annS/12;
    retPayM=monS*(retPer/PERCONV);
    retPayT=retPayM*6;
    newMS=retPayM+monS;
    newYS=(newMS*12);
    
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Retroactive pay    = $"<<setw(7)<<retPayT<<endl;
    cout<<"New annual salary  = $"<<setw(7)<<newYS<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<newMS;
    
    //Exit the Program - Cleanup
    return 0;
}