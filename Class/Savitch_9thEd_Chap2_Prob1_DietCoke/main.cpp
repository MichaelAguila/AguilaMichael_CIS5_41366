/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 14, 2021, 8:32 PM
 * Purpose:  Figure out how many cans of soda
 *           before death
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float GCONVLB=45359.2/100; //Conversion of grams to 1 lbs
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   massL, //Lethal dose of artificial sweetener to kill a mouse
            massM,//Mass of mouse in grams
            desrWp,//Desired weight in pounds
            desrWg,//Desired weight in grams
            massS,  //Mass of soda pop in grams
            massA;//Mass of artificial sweetener in soda pop in percentage
    int     cans;    //Number of cans to kill user
    
    //Initialize Variables
    massL=5;
    massM=35;
    massS=350;
    massA=0.001f;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
    cout<<"Input the desired dieters weight in lbs."<<endl;
    
    //Map Inputs to Outputs -> Process
    cin>>desrWp;
    desrWg=desrWp*GCONVLB;
    cans=desrWg*massL/(massS*massA*massM);
    
    //Display Inputs/Outputs
    cout<<"The maximum number of soda pop cans\n"
            "which can be consumed is "<<cans<< " cans";
    
    //Exit the Program - Cleanup
    return 0;
}