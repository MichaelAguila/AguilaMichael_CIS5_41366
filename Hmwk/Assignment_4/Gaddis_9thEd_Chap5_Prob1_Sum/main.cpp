/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 23, 2020, 5:06 PM
 * Purpose:  Loop for sum of all integers
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
      
    //Declare Variables
    int usrNum,//Positive integer entered by user
        sum=0;   //Sum of all integers
            
    //Initialize or input i.e. set variable values
    cin>>usrNum;
    
    //Addition of all integer up to number entered
    for(int num=1; num<=usrNum; num++){
        sum += num;
    }
        
    //Display the outputs
    cout<<"Sum = "<<sum;
    
    //Exit stage right or left!
    return 0;
}