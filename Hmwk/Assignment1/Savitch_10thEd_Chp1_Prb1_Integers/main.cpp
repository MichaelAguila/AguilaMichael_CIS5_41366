/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 10, 2021, 6:18 PM
 * Purpose:  Savitch
 *           Chapter 1
 *           Question 1: Integers   
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
    unsigned short  op1,    //Operand 1
                    op2,    //Operand 2
                    total,  //Sum of operand 1 and 2
                    product;//Product of operand 1 and 2
            
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
        
    //Display Inputs/Outputs
    cout << "Press Enter/Return after entering a number." << endl;
    cout << "Enter any whole number between 1 and 100." << endl;
    cin >> op1;
    cout << "Enter another whole number between 1 and 100." << endl;
    cin >> op2;
    
    //Map Inputs to Outputs -> Process
    total = op1 + op2;
    product = op1 * op2;
    
    //Display Inputs/Outputs
    cout << "The sum of your two numbers is " << total << endl;
    cout << "The product of your two numbers is " << product << endl;
    
    //Exit the Program - Cleanup
    
    return 0;
}