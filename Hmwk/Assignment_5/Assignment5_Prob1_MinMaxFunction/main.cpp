/* 
 * Author: Michael Aguila
 * Created on: 1/26/21
 * Purpose:  Inputs 3 integers and returns both in min and max
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num1,
        num2,
        num3,
        min,
        max;
    
    //Initialize Variables
    num1=num2=num3=min=max=0;
    
    cout<<"Input 3 numbers"<<endl;
    cin>>num1>>num2>>num3;
    min=max=num3;
    
    //Process/Map inputs to outputs
    minmax(num1,num2,num3,min,max);
    
    //Output data
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;
    
    //Exit stage right!
    return 0;
}

void minmax(int num1,int num2,int num3,int&min,int&max){
    //find min
    if(num1<min)
        min=num1;
    if(num2<min)
        min=num2;
    if(num3<min)
        min=num3;
    
    //find max
    if(num1>max)
        max=num1;
    if(num2>max)
        max=num2;
    if(num3>max)
        max=num3;   
       
}