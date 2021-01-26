/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 12, 2021, 8:06 PM
 * Purpose:  Calculate the military budget as a percentage
 *           of the federal budget
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //I/O Manipulators   
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
const int PERCONV=100;  //Percentage conversion to decimal

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   milBdgt,   //Military budget in $s
            fedBdgt,   //Federal budget in $s
            mlPrcnt;   //Military budget in percentage 
    
    //Initialize Variables
    milBdgt=7.0e11f;    //Military Budget = 700 Billion
    fedBdgt=4.1e12f;    //Federal Budget = 4.1 Trillion
    
    //Map Inputs to Outputs -> Process
    
    mlPrcnt=milBdgt/fedBdgt*PERCONV;
    
    //Display Inputs/Outputs
    cout<<setprecision(2)<<fixed;
    cout<<"The military budget is " <<mlPrcnt<< "% of the US federal budget.";
    
    //Exit the Program - Cleanup
    return 0;
}