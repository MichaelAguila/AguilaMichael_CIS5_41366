/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 18, 2021, 10:20 PM
 * Purpose:  Displays 3 names in alphabetical order
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string  nameA,
            nameB,
            nameC;
    
    //Initialize Variables
    cout<<"Sorting Names"<<endl;
    cout<<"Input 3 names"<<endl;
    cin>>nameA;
    cin>>nameB;
    cin>>nameC;
    
    //Map Inputs to Outputs -> Process
    if (nameA<nameB && nameB<nameC && nameA<nameC)
        cout<<nameA<<endl<<nameB<<endl<<nameC;
    else if (nameA<nameC && nameC<nameB && nameA<nameB)
        cout<<nameA<<endl<<nameC<<endl<<nameB;
    else if (nameB<nameA && nameA<nameC && nameC<nameB)
        cout<<nameB<<endl<<nameA<<endl<<nameC;
    else if (nameB<nameC && nameC<nameA && nameB<nameA)
        cout<<nameB<<endl<<nameC<<endl<<nameA;
    else if (nameC<nameA && nameA<nameB && nameC<nameB)
        cout<<nameC<<endl<<nameA<<endl<<nameB;
    else if(nameC<nameB && nameB<nameA && nameC<nameA)
        cout<<nameC<<endl<<nameB<<endl<<nameA;
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}