/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 25, 2021, 1:48 PM
 * Purpose:  Find the max of either two or three parameters
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
    float numA, //User inputed float
          numB, //User inputed float
          numC; //User imputed float
    
    //Initialize Variables
    numA=numB=numC=0;
    
    cout<<"Enter first number:"<<endl<<endl;
    cin>>numA;
    cout<<"Enter Second number:"<<endl<<endl;
    cin>>numB;
    cout<<"Enter third number:"<<endl<<endl;
    cin>>numC;
    
    //Find the max of the first two inputs    
    cout<<"Largest number from two parameter function:"<<endl;
    (numA>numB ? cout<<numA : cout<<numB);
    cout<<endl<<endl;
        
    //Find the max of all three inputs
    cout<<"Largest number from three parameter function:"<<endl;
    (numA>numB&&numA>numC ? cout<<numA:
     numB>numA&&numB>numC ? cout<<numB: cout<<numC);
    cout<<endl;
              
    //Exit the Program - Cleanup
    return 0;
}