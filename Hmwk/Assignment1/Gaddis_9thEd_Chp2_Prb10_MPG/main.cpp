/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 10, 2021, 1:39 AM
 * Purpose:  Gaddis 9th Ed 
 *           Chapter 2
 *           Problem 10: MPG
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   gal,    //amount of fuel a car holds in gallons
            miles,  //amount of miles a car can travel before refueling
            mpg;    //miles per gallon
    
    //Initialize Variables
    gal=15;
    miles=375;
    mpg=miles/gal;
         
    //Map Inputs to Outputs -> Process
    cout << "A car holds " << gal << " gallons of fuel." << endl;
    cout << "It can travel " << miles << " miles before refueling." <<endl;
    cout << "The car gets " << mpg << " miles per gallon." <<endl;
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}