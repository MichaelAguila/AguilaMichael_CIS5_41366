/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 5, 2021, 8:54 PM
 * Purpose:  Assignment 1 
 *           Gaddis 9th Ed 
 *           Chapter 2
 *           Problem 1: Sum of Two Numbers
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
    short int op1,  //operand 1
              op2,  //operand 2
            total;  // total = operand 1 + operand 2
    
    //Initialize Variables
    op1=50;
    op2=100;
    
    //Map Inputs to Outputs -> Process
    total=op1+op2;
    
    //Display Inputs/Outputs
    cout << "total is " << total << endl;
    //Exit the Program - Cleanup
    return 0;
}