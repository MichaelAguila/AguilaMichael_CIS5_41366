/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 10, 2021, 1:06 AM
 * Purpose:  Gaddis 9th Ed 
 *           Chapter 2
 *           Problem 8: Total Purchase
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
    float   item1,  //Price of item 1 in dollars
            item2,  //Price of item 2 in dollars
            item3,  //Price of item 3 in dollars
            item4,  //Price of item 4 in dollars
            item5,  //Price of item 5 in dollars
            sTotal, //Subtotal of all items in dollars
            tax,    //Amount of sales tax in dollars
            taxPer, //Sales tax percentage
            total;  //Total amount of items and sales tax in dollars
            
    //Initialize Variables
    item1=15.95;
    item2=24.95;
    item3=6.95;
    item4=12.95;
    item5=3.95;
    sTotal = item1 + item2 + item3 + item4 + item5;
    taxPer = 0.07;
    tax = sTotal * taxPer;
    total = sTotal + tax;
    
    //Map Inputs to Outputs -> Process
    cout<<"    Item 1 = $"<<item1<<endl;
    cout<<"    Item 2 = $"<<item2<<endl;
    cout<<"    Item 3 = $"<<item3<<endl;
    cout<<"    Item 4 = $"<<item4<<endl;
    cout<<"    Item 5 = $"<<item5<<endl;
    cout<<" Sub Total = $"<<sTotal<<endl;
    cout<<"Tax (7.0%) = $"<<tax<<endl;
    cout<<"     Total = $"<<total<<endl;
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}