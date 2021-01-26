/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 10, 2021, 7:10 PM
 * Purpose: Savitch 10th Ed
 *          Chapter 1
 *          Problem 3 : Coins
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float    QUARTER = 0.25, // Monetary value of quarter in dollars
               DIMES   = 0.10, // Monetary value of dimes in dollars
               NICKELS = 0.05; // Monetary value of nickels in dollars

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    unsigned    qtrAmt,   // Amount of quarters
                dimAmt,   // Amount of dimes
                nikAmt;   // Amount of nickels 
    float       qtrTot,   // Total monetary amount of user's quarters in dollars
                dimTot,   // Total monetary amount of user's dimes in dollars  
                nikTot,   // Total monetary amount of user's nickels in dollars
                total;    // Total monetary amount of user's coins in dollars  
            
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
        
    //Display Inputs/Outputs
    cout << "Input the amount of quarter(s) you have : " << endl;
    cin >> qtrAmt;
    cout << "Input the amount of dime(s) you have : " << endl;
    cin >> dimAmt;
    cout << "Input the amount of nickel(s) you have : " << endl;
    cin >> nikAmt;
    
    //Map Inputs to Outputs -> Process
    qtrTot = QUARTER * qtrAmt;
    dimTot = DIMES * dimAmt;
    nikTot = NICKELS * nikAmt;
    total = qtrTot + dimTot + nikTot;
    
    //Display Inputs/Outputs
    cout << "You have $" << total << endl;
    
    //Exit the Program - Cleanup
    return 0;
}