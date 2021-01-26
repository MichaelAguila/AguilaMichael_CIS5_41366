/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 10, 2021, 3:31 PM
 * Purpose:  Gaddis 9th Ed 
 *           Chapter 2
 *           Problem 19: Annual High Temperature
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
    float       temNy,     //average July temperature in New York in Fahrenheit
                temDn,     //average July temperature in Denver in Fahrenheit
                temPh,     //average July temperature in Phoenix in Fahrenheit
              perRise,     //percentage of rise
               nTemNy,     //new average of July temperature in NY in Fahrenheit
               nTemDn,     //new average of July temperature in Denver in Fahrenheit
               nTemPh;     //new average of July temperature in Phoenix in Fahrenheit
            
    //Initialize Variables
    temNy = 85;
    temDn = 88;
    temPh = 106;
    perRise = 0.02;            
    
    //Map Inputs to Outputs -> Process
    nTemNy = (temNy * perRise) + temNy;
    nTemDn = (temDn * perRise) + temDn;
    nTemPh = (temPh * perRise) + temPh;
    
    //Display Inputs/Outputs
    cout <<"The new average of July high temeperatures with a 2% rise would be:" << endl;
    cout << "New York : " << nTemNy << "   degrees Fahrenheit" << endl;
    cout << "Denver   : " << nTemDn << "  degrees Fahrenheit" << endl;
    cout << "Phoenix  : " << nTemPh << " degrees Fahrenheit" << endl;
    
    //Exit the Program - Cleanup
    return 0;
}