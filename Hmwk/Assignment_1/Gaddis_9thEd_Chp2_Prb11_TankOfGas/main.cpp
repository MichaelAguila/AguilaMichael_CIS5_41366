/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 10, 2021, 1:41 PM
 * Purpose:  Gaddis 9th Ed 
 *           Chapter 2
 *           Problem 11: Tank of Gas
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
    float   gal,     //Size of car's gas tank in gallons
            mpgTwn,  //Miles per gallon driven in town
            mpgHwy,  //Miles per gallon driven on highway
            avgMpg,  //Average miles per gallon
            dist;    //Distance the car can travel on one tank of gas in miles
            
    //Initialize Variables
    gal = 20;
    mpgTwn = 23.5;
    mpgHwy = 28.9;
    
    //Map Inputs to Outputs -> Process
    avgMpg = (mpgTwn + mpgHwy)/2;
    dist = gal * avgMpg;
    
    //Display Inputs/Outputs
    cout << "The car can travel " << dist << " miles." << endl;
    
    //Exit the Program - Cleanup
    return 0;
}