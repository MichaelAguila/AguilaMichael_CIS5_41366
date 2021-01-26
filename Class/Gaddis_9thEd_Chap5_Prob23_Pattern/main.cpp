/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 25, 2021, 8:00 AM
 * Purpose:  Creation of a pattern
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned short  steps;  //Number of colums
    char            plus;   //Plus sign
    
    //Initialize or input i.e. set variable values
    steps=0;
    plus='+';
    cin>>steps;
    
    //First triangle pattern
    for(unsigned short i=0; i<steps; i++){
            for(unsigned short j=0; j<=i; j++){
                cout<<plus;
            }
        cout<<endl<<endl;
    }
    
    //Second triangle pattern
    for(unsigned short i=0; i<(steps-1); i++){
            for(unsigned short j=steps; j>i; j--){
                cout<<plus;
            }    
        cout<<endl<<endl;
    }
    
    //Last plus
    cout<<plus;
    //Display the outputs

    //Exit stage right or left!
    return 0;
}