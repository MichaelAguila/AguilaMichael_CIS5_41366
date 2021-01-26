/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 5, 2021, 9:50 PM
 * Purpose:  Assignment 1 
 *           Gaddis 9th Ed 
 *           Chapter 2
 *           Problem 3: Sales Tax
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
    int   totl;       // Total purchase in dollars
    float sTax,       // State sales tax in percentage
          cTax,       // County sales tax in percentage
          tTax;       // Total sales tax in dollars  
            
    //Initialize Variables
    totl=95;
    sTax=0.04;
    cTax=0.02;
    
    //Map Inputs to Outputs -> Process
    tTax = (sTax * totl) + (cTax * totl);
    
    //Display Inputs/Outputs
    cout << "Total sales tax is $" << tTax << endl;
    
    //Exit the Program - Cleanup
    return 0;
}