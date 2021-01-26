/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 18, 2021, 10:42 PM
 * Purpose:  Determines first, second, and third place
 */

//System Libraries
#include <iostream>  //I/O Library
#include <string>    //String
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string  runA,   //Name of runner A
            runB,   //Name of runner B
            runC;   //Name or runner C
    float   timeA,  //time of runner A
            timeB,  //time of runner B
            timeC;  //time of runner C
    
    //Initialize Variables
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    
    cin>>runA;
    cin>>timeA;
    cin>>runB;
    cin>>timeB;
    cin>>runC;
    cin>>timeC;
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    
    if(timeA>0 && timeB>0 && timeC>0){
        if(timeA<timeB && timeA<timeC){
            cout<<runA<<"\t"<<setw(3)<<timeA<<endl;
                if(timeB<timeC){
                    cout<<runB<<"\t"<<setw(3)<<timeB<<endl;
                    cout<<runC<<"\t"<<setw(3)<<timeC;
                }else{
                    cout<<runC<<"\t"<<setw(3)<<timeC<<endl;
                    cout<<runB<<"\t"<<setw(3)<<timeB;
                }
        }else if(timeB<timeA && timeB<timeC){
            cout<<runB<<"\t"<<setw(3)<<timeB<<endl;
                if(timeA<timeC){
                    cout<<runA<<"\t"<<setw(3)<<timeA<<endl;
                    cout<<runC<<"\t"<<setw(3)<<timeC;
                }else{
                    cout<<runC<<"\t"<<setw(3)<<timeC<<endl;
                    cout<<runA<<"\t"<<setw(3)<<timeA;
                }
        }else if(timeC<timeA && timeC<timeB){
            cout<<runC<<"\t"<<setw(3)<<timeC<<endl;
                if(timeA<timeB){
                    cout<<runA<<"\t"<<setw(3)<<timeA<<endl;
                    cout<<runB<<"\t"<<setw(3)<<timeB;
                }else{
                    cout<<runB<<"\t"<<setw(3)<<timeB<<endl;
                    cout<<runA<<"\t"<<setw(3)<<timeA;
                }
        }    
    }else{
        cout<<"Please enter positive number for time!"<<endl;
    }
        
    //Exit the Program - Cleanup
    return 0;
}