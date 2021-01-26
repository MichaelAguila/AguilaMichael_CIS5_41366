/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 10, 2021, 3:14 PM
 * Purpose:  Gaddis 9th Ed 
 *           Chapter 2
 *           Problem 18: Energy Drink Consumption
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
    unsigned short   ttlCust,    //Total customers of soft drink company
                     oneCust,    //Number of customers who purchased one or more energy drinks per week
                     citCust;    //Number of purchasing customers, who prefer citrus-flavored energy drinks
    float             onePer,    //Percentage of customers who purchased one or more energy drinks per week
                      citPer;    //Percentage of purchasing customers, who prefer citrus-flavored energy drinks
    
    //Initialize Variables
    ttlCust = 16500;
    onePer = 0.15;
    citPer = 0.58;
    
    //Map Inputs to Outputs -> Process
    oneCust = ttlCust * onePer;
    citCust = oneCust * citPer;
    
    //Display Inputs/Outputs
    cout << "The approx. number of customers who purchase one or more energy drinks per week is " << oneCust << "." << endl;
    cout << "Of those customers, the approx. number of customer in the survey who prefer citrus-flavored energy drinks is " << citCust << "." << endl;
    
    //Exit the Program - Cleanup
    return 0;
}