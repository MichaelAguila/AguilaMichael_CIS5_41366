/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 10, 2021, 2:57 PM
 * Purpose:  Gaddis 9th Ed 
 *           Chapter 2
 *           Problem 17: Stock Commission
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
    int     share;     //Amount of shares
    float   ppShr,     //Price per shares in dollars
            perCom,    //Percentage of commission for stockbroker
            stock,     //Price of total stock without commission in dollars
            com,       //Price of commission in dollars 
            total;     //Total amount with commission 
    
    //Initialize Variables
    share=750;
    ppShr=35.00;
    perCom=0.02;
        
    //Map Inputs to Outputs -> Process
    stock = share * ppShr;
    com = stock * perCom;
    total = stock + com;
    
    //Display Inputs/Outputs
    cout << "The amount paid for the stock (without commission) is $" << stock << endl;
    cout << "The amount of the commission is                       $" << com   << endl;
    cout << "The total amount paid total (stock and commission) is $" << total << endl;
    
    //Exit the Program - Cleanup
    return 0;
}