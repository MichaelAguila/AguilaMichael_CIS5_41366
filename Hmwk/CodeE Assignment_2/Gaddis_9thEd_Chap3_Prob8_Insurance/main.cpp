/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 14, 2021, 10:00 AM
 * Purpose:  Calculate home or building insurance amount
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const unsigned short PERCONV=100;   //Percentage conversion

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   worth,  //House or building worth in $s
            per,    //Minimum percentage to insure home or building
            amnt;   //Minimum amount of insurance in $s
    
    //Initialize Variables
    worth=amnt=0;
    per=80.0f;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Insurance Calculator"<<endl;
    cout<<"How much is your house worth?"<<endl;
    
    //Map Inputs to Outputs -> Process
    cin>>worth;
    amnt=worth*(per/PERCONV);
    
    //Display Inputs/Outputs
    cout<<"You need $"<<amnt<< " of insurance.";
    
    //Exit the Program - Cleanup
    return 0;
}