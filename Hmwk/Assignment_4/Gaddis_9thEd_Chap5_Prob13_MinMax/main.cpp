/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 23, 2021, 7:41 PM
 * Purpose: Determine smallest and largest user inputed number
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
    int number, //User inputed number
        minNum, //Smallest number user inputed
        maxNum; //Largest number user inputed
    
    //Initialize Variables
    
    //cout<<"Enter series of integers and then enter -99 when finished."<<endl;
    cin>>number;
    minNum=maxNum=number;
    
    //Map Inputs to Outputs -> Process
    //Determine minimum and maximum user inputed values
    while(number != -99){
        if(minNum>number){
            minNum=number;
        }
        if (maxNum<number){
            maxNum=number;
        }
        
        cin>>number;
    }
    //Display Inputs/Outputs
    cout<<"Smallest number in the series is "<<minNum<<endl;
    cout<<"Largest  number in the series is "<<maxNum;
    
    //Exit the Program - Cleanup
    return 0;
}
