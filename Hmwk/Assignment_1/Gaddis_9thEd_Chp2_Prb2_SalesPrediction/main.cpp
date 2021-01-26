/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 5, 2021, 9:12 PM
 * Purpose:  Assignment 1 
 *           Gaddis 9th Ed 
 *           Chapter 2
 *           Problem 2: Sales Prediction
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
    short int pctTtl;   //East Coast division percentage of total sales
          int    sls,   //Company total sales in dollars
              estTtl;   //East Coast division total sales in dollars
    
    //Initialize Variables
    pctTtl=58;
    sls=8600000;
    
    //Map Inputs to Outputs -> Process
    estTtl = pctTtl * sls / 100;  //East Coast division total = East coast percentage * Company total / 100
    
    //Display Inputs/Outputs
    cout << "East Coast division will generate $" << estTtl << " this year." << endl;
        
    //Exit the Program - Cleanup
    return 0;
}