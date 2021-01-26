/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 14, 2021, 12:20 PM
 * Purpose:  Calculates sine, cosine, and tangent of an angle
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cmath>     //Math Library
#include <iomanip>   //I/O manipulators
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float PI=4*atan(1);     
const float CNVRAD=PI/180;  //Conversion to radians from degrees

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   angDeg, //Angle in degrees
            angRad; //Angle in radians
    
    //Initialize Variables
    cout<<"Calculate trig functions"<<endl;
    cout<<"Input the angle in degrees."<<endl;
    cin>>angDeg;
    
    //Map Inputs to Outputs -> Process
    angRad=angDeg*CNVRAD;
    
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"sin("<<static_cast<int>(angDeg)<<") = "<<sin(angRad)<<endl;
    cout<<"cos("<<static_cast<int>(angDeg)<<") = "<<cos(angRad)<<endl;
    cout<<"tan("<<static_cast<int>(angDeg)<<") = "<<tan(angRad);

    //Exit the Program - Cleanup
    return 0;
}