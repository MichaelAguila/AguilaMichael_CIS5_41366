/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 10, 2021, 3:55 PM
 * Purpose:  Gaddis 9th Ed 
 *           Chapter 2
 *           Problem 20: How Much Paint
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
    unsigned short      sqft,       //Amount of square feet coverage per gallon of paint
                        gal,        //Amount of gallons to coat fence with two coats, front and back
                        height,     //Height of fence in feet
                        length,     //Length of fence in feet
                        area,       //Area of fence in square feet
                        areaP;      //Total area of fence that needs to be painted (two coats,front and back)
    
    //Initialize Variables
    sqft = 340;
    height = 6;
    length = 100;
    
    //Map Inputs to Outputs -> Process
    area = height * length;
    areaP = area * 2 * 2;     //Area of fence * front and back * two coats
    gal = (areaP /sqft) + 1; //Total gallons + One extra gallon
    
    //Display Inputs/Outputs
    cout << "The area of the fence on one side is   " << area << " square feet." << endl;
    cout << "The total area needed to be painted is " << areaP<< " square feet. (Two coats, both sides)" << endl;
    cout << "It will take " << gal << " gallons to paint the fence" << endl;
    //Exit the Program - Cleanup
    return 0;
}