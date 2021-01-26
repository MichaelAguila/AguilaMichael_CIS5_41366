/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 14, 2021, 10:24 AM
 * Purpose:  Celsius to Farenheit conversion
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>  //I/O Manipulators
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   far,    //Temperature in degrees Fahrenheit. Input from users.
            cel;    //Temperature in degrees Celsius after conversion.
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Temperature Converter"<<endl;
    cout<<"Input Degrees Fahrenheit"<<endl;
    
    //Map Inputs to Outputs -> Process
    cin>>far;
    cel=(5.0f/9.0f)*(far-32);
    
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<far<<" Degrees Fahrenheit = "<<cel<<" Degrees Centigrade";
    
    //Exit the Program - Cleanup
    return 0;
}