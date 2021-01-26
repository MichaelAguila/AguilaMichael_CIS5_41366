/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 25, 2021, 10:50 AM
 * Purpose: Calculate miles per gallon
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float LGCONV=0.264179f; //Liter to gallon conversion

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float gasL, //# of liters of gasoline
          gasG, //# of gallons of gasoline
          miles,//# of miles traveled
          mpg;  //miles per gallon
    char  again;//Y or N input for repeat
    
    //Initialize Variables
    gasL=gasG=miles=mpg=0;
    
    //Map Inputs to Outputs -> Process
    do{
        //User inputs gas in liters and number of miles traveled
        cout<<"Enter number of liters of gasoline:"<<endl<<endl;
        cin>>gasL;
        cout<<"Enter number of miles traveled:"<<endl<<endl;
        cin>>miles;
        
        //Conversion of liters to gallons
        gasG=LGCONV*gasL;
        
        //Calculation of MPG
        mpg=miles/gasG;
        
        //Formatting
        cout<<fixed<<setprecision(2)<<showpoint;
        
        //Display Inputs/Outputs
        cout<<"miles per gallon:"<<endl;
        cout<<mpg<<endl;
        cout<<"Again:"<<endl;
        cin>>again;
        
        if(again=='y'||again=='Y'){
            cout<<endl;
        }
        
    }
    while(again=='y'||again=='Y');
   
    //Exit the Program - Cleanup
    return 0;
}