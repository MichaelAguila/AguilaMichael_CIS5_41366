/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 19, 2021, 1:57 PM
 * Purpose: To figure out Astrology compatibility
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>    //String
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string  element,    //Elements in astrology
            signA,      //User input astrology sign A
            signB;      //User input astrology sign B
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>signA;
    cin>>signB;
    
    //Fire element compatability
    if (signA == "Aries" || signA == "Leo" || signA == "Sagittarius"){
        if (signB == "Aries" || signB == "Leo" || signB == "Sagittarius"){
            element="Fire";
            cout<<signA<<" and "<<signB<<" are compatible "<<element<<" signs.";    
        }
        else
            cout<<signA<<" and "<<signB<<" are not compatible signs.";
    }
    //Earth element compatibility
    else if (signA == "Taurus" || signA == "Virgo" || signA == "Capricorn"){
        if (signB == "Taurus" || signB == "Virgo" || signB == "Capricorn"){
            element="Earth";
            cout<<signA<<" and "<<signB<<" are compatible "<<element<<" signs.";    
        }
        else
            cout<<signA<<" and "<<signB<<" are not compatible signs.";
    }
    //Air element compatibility
    else if (signA == "Gemini" || signA == "Libra" || signA == "Aquarius"){
        if (signB == "Gemini" || signB == "Libra" || signB == "Aquarius"){
            element="Air";
            cout<<signA<<" and "<<signB<<" are compatible "<<element<<" signs.";    
        }
        else
            cout<<signA<<" and "<<signB<<" are not compatible signs.";
    }
    //Water element compatibility
    else if (signA == "Cancer" || signA == "Scorpio" || signA == "Pisces"){
        if (signB == "Cancer" || signB == "Scorpio" || signB == "Pisces"){
            element="Water";
            cout<<signA<<" and "<<signB<<" are compatible "<<element<<" signs.";    
        }
        else
            cout<<signA<<" and "<<signB<<" are not compatible signs.";
    }
    else
        cout<<"Please enter a valid sign.";

        
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}