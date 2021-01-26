/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 10, 2021, 1:41 PM
 * Purpose:  Gaddis 9th Ed 
 *           Chapter 2
 *           Problem 12: Land Calculation
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
    const int ACRE = 43560;     //One square acre equivalent to feet

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   land,       //Size of tract of land in square feet
            lndAc;      //Size of tract of land in acres
    
    //Initialize Variables
    land = 391876;
        
    //Map Inputs to Outputs -> Process
    lndAc = land / ACRE;
    
    //Display Inputs/Outputs
    cout << "Tract of land is " << lndAc << " acres." << endl;
            
    //Exit the Program - Cleanup
    return 0;
}