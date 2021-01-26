/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 18, 2021, 7:02 PM
 * Purpose:  Calculate # of points a customer has earned
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
unsigned short  points, //# of points earned
                books;  //# of books read
    
    //Initialize Variables
    books=points=0;
    
    //Map Inputs to Outputs -> Process
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>books;
    
    points = (books<1)?0:       
             (books<2)?5:
             (books<3)?15:
             (books<4)?30:60;
            
        
    //Display Inputs/Outputs
    cout<<"Books purchased ="<<setw(3)<<books<<endl;
    cout<<"Points earned   ="<<setw(3)<<points;
    
    //Exit the Program - Cleanup
    return 0;
}