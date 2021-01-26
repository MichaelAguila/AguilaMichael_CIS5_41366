/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 25, 2021, 8:00 AM
 * Purpose:  Creation of rectangle
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned short length;//User inputed number
    char           lettr;//User inputed letter
    
    
    //Initialize or input i.e. set variable values
    length=0;
    //cout<<"Please enter length of rectangle."<<endl;
    cin>>length;
    //cout<<"Please enter X or Y."<<endl;
    cin>>lettr;
    
    //Input validation
    while(length < 0){
        cout<<"Please enter correct length!"<<endl;
        cin>>length;
    }
    
    //Creation of rectangle
    for(unsigned short height=1; height<length; height++){//Height of rectangle
        for(unsigned short width=0; width<length; width++){//Width of rectangle
                cout<<lettr;
            }
        cout<<endl;
    }
    for(unsigned short width=0; width<length; width++){
        cout<<lettr;
    }
        
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}