/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 14, 2021, 8:37 AM
 * Purpose:  Average of five inputs 
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   testSc, //Test scores
            avg;    //Average test scores
    int     totTest;//Counter for number of test
    
    //Initialize Variables
    testSc=0;
    avg=0;
    totTest=0;
    
    
    //Map Inputs to Outputs -> Process
    cout<<"Input 5 numbers to average."<<endl;
    
    cin>>testSc;
    avg+=testSc;
    totTest+=1;
    
    cin>>testSc;
    avg+=testSc;
    totTest+=1;
    
    cin>>testSc;
    avg+=testSc;
    totTest+=1;
    
    cin>>testSc;
    avg+=testSc;
    totTest+=1;
    
    cin>>testSc;
    avg+=testSc;
    totTest+=1;
    
    avg=avg/totTest;
    
    //Display Inputs/Outputs
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"The average = "<<avg;
    
    //Exit the Program - Cleanup
    return 0;
}
