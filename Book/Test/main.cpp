/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 21, 2020, 7:37 PM
 * Purpose:  Determine if a number is Prime
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants only
//Math, Physics, Conversions, Higher Order Dimension 

//Function Prototypes
bool isPrime(int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Set random number seed
    
    //Declare all variables
    int nLoop=1000;
    
    //Display Outputs
    for(int i=1;i<=nLoop;i++){
        cout<<i<<" is "<<(isPrime(i)?"Prime":"not Prime")<<endl;
    }

    //Exist Stage Right
    return 0;
}

bool isPrime(int n){
    if(n<=1)return false;
    if(n==2)return true;
    for(int test=2;test<=sqrt(n);test++){
        if(n%test==0)return false;
    }
    return true;
}