/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 14, 2021, 6:53 PM
 * Purpose:  Figure out maximum room capacity
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
    unsigned short int  numPeo, //Number of people attending the meeting
                        maxCap, //Maximum room capacity
                        addIn,  //Number of people that can be added to room
                        exOut;  //Number of people that must exit room
    
    //Initialize Variables
    numPeo=maxCap=addIn=exOut=0;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    cin>>maxCap>>numPeo;
    
    if(numPeo<=maxCap)
        {
        addIn=maxCap-numPeo;
            cout<<"Meeting can be held."<<endl;
            cout<<"Increase number of people by "<<
            addIn<< " will be allowed without violation.";
        }
    else
        {
        exOut=numPeo-maxCap;
        cout<<"Meeting cannot be held."<<endl;
        cout<<"Reduce number of people by "<<exOut<<" to avoid fire violation.";
        }
    
    //Exit the Program - Cleanup
    return 0;
}