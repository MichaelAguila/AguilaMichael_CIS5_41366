/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 23, 2021, 6:28 PM
 * Purpose:  Calculate daily penny salary that doubles every day.
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
      
    //Declare Variables
    int   numDays, //Number of days worked
           daySal, //Daily salary in pennies
            total, //Total salary in amount of pennies
            dolTot;//Total salary in dollars
    
    //Initialize Variables
    numDays=0;
    daySal=1;
    total=dolTot=0;
    
    //cout<<"Please enter number of days worked."<<endl;
    cin>>numDays;//User inputs number of days worked
    
    //Validate inputed days
    while (numDays<0){
        cout<<"Please enter number of days greater than 0 days!"<<endl;
        cin>>numDays;
    }
    //Map Inputs to Outputs -> Process
    for (int days=1; days<=numDays; days++){
       total += daySal;
       daySal*=2;
    }
    
    dolTot=total/100;
 
     //Display Inputs/Outputs
    cout<<"Pay = $"<<dolTot<<".";
    if(total%100 < 10)
        cout<<"0"<<total%100;
    else if(total%100>=10)
        cout<<total%100;
    
    //Exit the Program - Cleanup
    return 0;
}