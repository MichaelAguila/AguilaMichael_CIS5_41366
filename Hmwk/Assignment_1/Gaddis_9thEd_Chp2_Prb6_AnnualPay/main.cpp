/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 10, 2021, 12:32 AM
 * Purpose:  Gaddis 9th Ed 
 *           Chapter 2
 *           Problem 6: Annual Pay
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
    float payAmnt,  //Amount of pay employee earns/pay period in dollars
           anlPay;  //Employee's total annual pay
      int  payPer;  //Amount of pay periods in a year
    
    //Initialize Variables
      payAmnt=2200.0;
      payPer=26;
    
    //Map Inputs to Outputs -> Process
      anlPay=payAmnt*payPer;
    
    //Display Inputs/Outputs
      cout<<"The employee's total anual pay is $"<<anlPay<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}