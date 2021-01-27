/* 
 * Author: Michael Aguila 
 * Created on: January 26, 2021 
 * Purpose: Determine if an integer is prime  
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int usrNum;//User inputed number
    
    //Initialize Variables
    cout<<"Input a number to test if Prime."<<endl;
    cin>>usrNum;
    
    //Process/Map inputs to outputs
    if (isPrime(usrNum))
    cout<<usrNum<<" is prime.";
    else
    cout<<usrNum<<" is not prime.";
   
    //Exit stage right!
    return 0;
}

bool isPrime(int x){
    bool rslt;    
    (x%2==1) ? rslt=true: rslt=false;
    return rslt;   
}