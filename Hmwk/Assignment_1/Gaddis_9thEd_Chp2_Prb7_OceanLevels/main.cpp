/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 10, 2021, 12:43 AM
 * Purpose:  Gaddis 9th Ed 
 *           Chapter 2
 *           Problem 7: Ocean Levels
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const int FIVE_YR=5, //Five years as integer
           SEV_YR=7, //Seven years as integer   
          TEN_YR=10; //Ten years as integer     
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float  rise,  //Ocean level rise in one year measured in millimeters
          fRise,  //Ocean level rise in five years measured in millimeters
          sRise,  //Ocean level rise in seven years measured in millimeters
          tRise;  //Ocean level rise in ten years measured in millimeters
    
    //Initialize Variables
    rise=1.5;
    fRise=rise*FIVE_YR;
    sRise=rise*SEV_YR;
    tRise=rise*TEN_YR;
    
    //Map Inputs to Outputs -> Process
    cout<<"The ocean rises about "<<rise<<"mm per year."<<endl;
    cout<<"The ocean's level will be "<<endl;
    cout<<fRise<<"mm higher in 5 years,"<<endl;
    cout<<sRise<<"mm higher in 7 years,"<<endl;
    cout<<"and "<<tRise<<"mm higher in 10 years."<<endl;
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}