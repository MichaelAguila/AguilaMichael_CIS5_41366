/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 14, 2021, 2:36 PM
 * Purpose:  Conversion of four digit Arabic numerals
 *           to Roman numerals
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
    unsigned short numCnv;   //User input number for conversion
    
    //Initialize Variables
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>numCnv;
    
    //Map Inputs to Outputs -> Process
    if(numCnv>=1000 && numCnv<=3000){
        // Determine 1000s, 100s, 10s,1s
        unsigned    thous,  //thousands           
                    hunds,  //hundreds
                    tens,   //tens
                    ones;   //ones
        thous=numCnv/1000;
        hunds=numCnv%1000/100;
        tens=numCnv%100/10;
        ones=numCnv%10;
        
        cout<<numCnv<<" is equal to ";
        
        //Output for the thousands
        cout<<(thous==3?"MMM":
               thous==2?"MM":
               thous==1?"M":"");
        
        //Output for the hundreds 
        cout<<(hunds==9?"CM":
               hunds==8?"DCCC":
               hunds==7?"DCC":
               hunds==6?"DC":
               hunds==5?"D":
               hunds==4?"CD":                   
               hunds==3?"CCC":
               hunds==2?"CC":
               hunds==1?"C":"");
        
        //Output for the tens
        cout<<(tens==9?"XC":
               tens==8?"LXXX":
               tens==7?"LXX":
               tens==6?"LX":
               tens==5?"L":
               tens==4?"XL":                   
               tens==3?"XXX":
               tens==2?"XX":
               tens==1?"X":"");
        
        //Output of the ones
        cout<<(ones==9?"IX":
               ones==8?"VIII":
               ones==7?"VII":
               ones==6?"VI":
               ones==5?"V":
               ones==4?"IV":                   
               ones==3?"III":
               ones==2?"II":
               ones==1?"I":"");
      
    }else
        cout<<numCnv<<" is Out of Range!";
   
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}