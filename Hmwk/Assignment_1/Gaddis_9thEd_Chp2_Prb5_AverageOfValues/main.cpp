/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 9, 2021, 12:17 AM
 * Purpose:  Gaddis 9th Ed 
 *           Chapter 2
 *           Problem 5: Average of Values
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
    int op1,    //operand 1
        op2,    //operand 2
        op3,    //operand 3    
        op4,    //operand 4
        op5,    //operand 5    
        sum,    //sum of all variables
        avg;    //average of all variables
            
    //Initialize Variables
    op1=28;
    op2=32;
    op3=37;
    op4=24;
    op5=33;
    
    //Map Inputs to Outputs -> Process
    sum=op1+op2+op3+op4+op5;
    avg=sum/5;
    
    //Display Inputs/Outputs
    cout<<"The average of "
        <<op1<<","<<op2<<","<<op3<<","<<op4<<", and "<<op5
        <<" is "<<avg<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}