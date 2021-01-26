/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 25, 2021, 10:38 AM
 * Purpose: Calculate miles1 per gallon
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float LGCONV=0.264179f; //Liter to gallon conversion

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float gasL1, //# of liters of gasoline of Car 1
          gasG1, //# of gallons of gasoline of Car 1
          miles1,//# of miles traveled of Car 1
          mpg1,  //miles per gallon of Car 1
          gasL2, //# of liters of gasoline of Car 2
          gasG2, //# of gallons of gasoline of Car 2
          miles2,//# of miles traveled of Car 2
          mpg2;  //miles per gallon of Car 2
    char  again;//Y or N input for repeat
    
    //Initialize Variables
    gasL1=gasG1=miles1=mpg1=0;
    gasL2=gasG2=miles2=mpg2=0;
    
    //Formatting
    cout<<fixed<<setprecision(2)<<showpoint;
    
    //Map Inputs to Outputs -> Process
    do{
        //User inputs gas in liters and number of miles traveled of Car 1
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>gasL1;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles1;
        
        //Conversion of liters to gallons of Car 1
        gasG1=LGCONV*gasL1;
        
        //Calculation of MPG of Car 1
        mpg1=miles1/gasG1;
        
        //Display output of Car 1
        cout<<"miles per gallon: "<<mpg1<<endl<<endl;
               
        //User inputs gas in liters and number of miles traveled of Car 2
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>gasL2;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles2;
        
        //Conversion of liters to gallons of Car 1
        gasG2=LGCONV*gasL2;
        
        //Calculation of MPG of Car 1
        mpg2=miles2/gasG2;
        
        //Display output of Car 1
        cout<<"miles per gallon: "<<mpg2<<endl<<endl;
       
        //Determine which car is more fuel efficient
        cout<<(mpg1>mpg2?"Car 1 is more fuel efficient":
               mpg1<mpg2?"Car 2 is more fuel efficient":
               mpg1==mpg2?"Fuel efficiency is equal":"");
        cout<<endl<<endl;
                
        //Ask User to repeat program
        cout<<"Again:"<<endl;
        cin>>again;
        
        if(again=='y'||again=='Y'){
            cout<<endl;
        }
        
    }
    while(again=='y'||again=='Y');
   
    //Exit the Program - Cleanup
    return 0;
}