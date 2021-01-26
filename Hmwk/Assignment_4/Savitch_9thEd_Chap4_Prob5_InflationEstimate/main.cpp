/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 25, 2021, 1:14 PM
 * Purpose:  Calculate inflation
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formating Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float PERCONV=100.0f; //Percentage conversion

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float   curPrce, //Current product price in dollars
            yaPrce,  //Year ago product price in dollars
            infDec,  //Inflation in decimal
            infPer,  //Inflation in percentage
            yearOne, //Estimated product price in one year
            yearTwo; //Estimated product price in two years
    char    again;   //Y or N to repeat program
    
    //Initialize Variables
    curPrce=yaPrce=infDec=infPer=0;
    
    
    //Map Inputs to Outputs -> Process
    cout<<fixed<<setprecision(2)<<showpoint;//Formatting
    do{
        //User inputs price of product
        cout<<"Enter current price:"<<endl;
        cin>>curPrce;
        cout<<"Enter year-ago price:"<<endl;
        cin>>yaPrce;
        
        //Calculate inflation rate
        infDec=(curPrce-yaPrce)/yaPrce;
        infPer=infDec*PERCONV;
        
        //Calculate price in one year
        yearOne=(infDec*curPrce)+curPrce;
        
        //Calculate price in two years
        yearTwo=(infDec*yearOne)+yearOne;
        
        //Display Inputs/Outputs
        cout<<"Inflation rate: "<<infPer<<"%"<<endl<<endl;
        cout<<"Price in one year: $"<<yearOne<<endl;
        cout<<"Price in two year: $"<<yearTwo<<endl<<endl;
        
        //Repeat program
        cout<<"Again:"<<endl;
        cin>>again;
        
        if (again=='y'||again=='Y'){
            cout<<endl;
        }
        
    }while(again=='y'||again=='Y');
       
    //Exit the Program - Cleanup
    return 0;
}