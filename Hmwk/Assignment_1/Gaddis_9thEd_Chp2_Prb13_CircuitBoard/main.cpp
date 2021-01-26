/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 10, 2021, 2:15 PM
 * Purpose:  Gaddis 9th Ed 
 *           Chapter 2
 *           Problem 13: Circuit Board Price
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
    float   cost,   //Cost of circuit boards in dollars
            perProf,//Percent of profit
            prof,   //Profit price in dollars
            sellPr; //Selling price
    
    //Initialize Variables
    cost = 14.95;
    perProf = 0.35;
        
    //Map Inputs to Outputs -> Process
    prof = (cost * perProf);
    sellPr = cost + prof;
    
    //Display Inputs/Outputs
    cout << "Circuit board cost is $" << cost << endl;
    cout << "Profit is             $" << prof << endl;
    cout << "Selling price is      $" << sellPr << endl;
    //Exit the Program - Cleanup
    return 0;
}