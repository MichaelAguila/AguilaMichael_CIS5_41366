/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 14, 2021, 9:23 AM
 * Purpose:  Report total calories of cookies consumed
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
    float   bag,    //Amount of cookies in a bag
            serv,   //Number of servings per bag
            cookPS, //Number of cookies per servings
            calPS,  //Number of calories per servings
            cookE,  //Number of cookies eaten
            calE;   //Number of calories eaten
    
    
    //Initialize Variables
    bag=40;
    serv=10;
    calPS=300;
    cookPS=0;
    cookE=0;
    calE=0;
    
    //Map Inputs to Outputs -> Process
    cookPS=bag/serv;
    
    //Display Inputs/Outputs
    cout<<"Calorie Counter"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    
    //Map Inputs to Outputs -> Process
    cin>>cookE;
    calE=(cookE/cookPS)*calPS;
    
    //Display Inputs/Outputs
    cout<<"You consumed "<<calE<<" calories.";
    
    //Exit the Program - Cleanup
    return 0;
}