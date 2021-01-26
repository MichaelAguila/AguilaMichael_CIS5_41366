/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 19, 2021, 9:31 PM
 * Purpose:  Calculate internet service provider bill
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float APRICE=9.95f,     //Package A price per month in $s
            BPRICE=14.95f,    //Package B price per month in $s
            CPRICE=19.95f,    //Package C price per month in $s
            AHOURS=10.0f,     //Package A max hours per month
            BHOURS=20.0f,     //Package B max hours per month
            AOVER=2.00f,      //Overage charge of package a in $s
            BOVER=1.00f;      //Overage charge of package b in $s

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char    packge;     //Package selection from User
    float   hrsUsed,    //Number of hours hrsUsed
            total;      //Total price in $s
            
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>packge;
    cin>>hrsUsed;
    
    //Map inputs -> outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    
    switch(packge){
        case 'A': 
                if(hrsUsed<=AHOURS && hrsUsed>=0){
                    total=APRICE;
                    cout<<"Bill = $"<<setw(6)<<total;
                }else if(hrsUsed>AHOURS){
                    total=APRICE+((hrsUsed-AHOURS)*AOVER);
                    cout<<"Bill = $"<<setw(6)<<total;
                }else{
                    cout<<"Please enter correct number of hours";
                }
                break;
                
        case 'B':
                if(hrsUsed<=BHOURS && hrsUsed>=0){
                    total=BPRICE;
                    cout<<"Bill = $"<<setw(6)<<total;
                }else if(hrsUsed>BHOURS){
                    total=BPRICE+((hrsUsed-BHOURS)*BOVER);
                    cout<<"Bill = $"<<setw(6)<<total;
                }else{
                    cout<<"Please enter correct number of hours";
                }
                break;
                
        case 'C':
                if(hrsUsed>=0){
                    total=CPRICE;
                    cout<<"Bill = $"<<setw(6)<<total;
                }else{
                    cout<<"Please enter correct number of hours";
                }
                break;
                
        default : 
                cout<<"Please select correct package."<<endl;
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}