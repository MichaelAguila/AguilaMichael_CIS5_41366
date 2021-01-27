/* 
 * Author: Michael Aguila 
 * Created on: 1/26/21 
 * Purpose: Create an integer function
 *          that outputs the factorial  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num,    //User inputed number
        fNum;   //Calculated factorial number    
    
    //Initialize Variables
    
    
    cout<<"This program calculates the factorial using a function prototype"
          " found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    cin>>num;
    
    //Process/Map inputs to outputs
        
    //Output data
    cout<<num<<"! = "<<fctrl(num);
    
    //Exit stage right!
    return 0;
}

int fctrl(int num){
    int fNum=1;
    for (int i=2;i<=num;i++){
        fNum*=i;
    }
    return fNum;
}