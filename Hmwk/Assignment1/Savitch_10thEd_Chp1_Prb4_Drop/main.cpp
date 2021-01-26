/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 10, 2021, 7:35 PM
 * Purpose: Savitch 10th Ed
 *          Chapter 1
 *          Problem 5 : Character
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const unsigned short    ACCL = 32;   // Acceleration due to gravity in feet per second

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   dist,   //Distance object travels in given time span
            time;   //Duration of time in seconds inputed by user
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout << "Enter an amount of time in seconds:" << endl;
    cin >> time;
    
    //Map Inputs to Outputs -> Process
    dist = (ACCL * (time * time)) / 2;
    
    //Display Inputs/Outputs
    cout << "In " << time << " seconds, an object will free fall " << dist << " feet." << endl;
    
    //Exit the Program - Cleanup
    return 0;
}