/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 14, 2021, 7:27 PM
 * Purpose:  Sum of numbers
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int     num,    //User inputed numbers
            negSum, //Sum of negative numbers including zero
            posSum, //Sum of positive numbers
            totSum; //Sum of all numbers
    
    //Initialize Variables
    totSum=negSum=posSum=0;
    
    //Map Inputs to Outputs -> Process
    cout<<"Input 10 numbers, any order, positive or negative"<<endl;
    
    cin>>num;
    num<=0 ? negSum+=num : posSum+=num;
    
    cin>>num;
    num<=0 ? negSum+=num : posSum+=num;
    
    cin>>num;
    num<=0 ? negSum+=num : posSum+=num;
    
    cin>>num;
    num<=0 ? negSum+=num : posSum+=num;
    
    cin>>num;
    num<=0 ? negSum+=num : posSum+=num;
    
    cin>>num;
    num<=0 ? negSum+=num : posSum+=num;
    
    cin>>num;
    num<=0 ? negSum+=num : posSum+=num;
    
    cin>>num;
    num<=0 ? negSum+=num : posSum+=num;
    
    cin>>num;
    num<=0 ? negSum+=num : posSum+=num;
    
    cin>>num;
    num<=0 ? negSum+=num : posSum+=num;
    
    //Sum of positives and negatives
    totSum=posSum+negSum;
    
    
    //Display Inputs/Outputs
    cout<<"Negative sum ="<<setw(4)<<right<<negSum<<endl;
    cout<<"Positive sum ="<<setw(4)<<right<<posSum<<endl;
    cout<<"Total sum    ="<<setw(4)<<right<<totSum;
    
    //Exit the Program - Cleanup
    return 0;
}