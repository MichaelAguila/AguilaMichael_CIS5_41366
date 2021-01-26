/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 9, 2021, 11:59 PM
 * Purpose:  Gaddis 9th Ed 
 *           Chapter 2
 *           Problem 4: Restaurant Bill
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
    float   meal,   //meal charge in dollars
         mealTax,   //meal charge with tax in dollars
          taxPer,   //tax of meal in percent
             tax,    //tax in dollars
          tipPer,   //tip in percent
             tip,    //tip in dollars
           total;   //total value of meal in dollars
            
    //Initialize Variables
    meal=88.67;
    taxPer=0.0675;
    tipPer=0.20;
    
    //Map Inputs to Outputs -> Process
    tax = meal * taxPer;
    mealTax = meal + tax;
    tip = mealTax * tipPer;
    total = mealTax + tip;
    
    //Display Inputs/Outputs
    cout<<"Meal cost is $"<<meal<<endl;
    cout<<"Tax amount is $"<<tax<<endl;
    cout<<"Tip amount is $"<<tip<<endl;
    cout<<"Total bill cost is $"<<total<<endl;
    
    //Exit the Program - Cleanup
    return 0;
}