/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 18, 2021, 8:41 PM
 * Purpose:  Calculate Bank charges
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>  //Formatting Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const float MONFEES = 10.00;    //Standard monthly fee
const float CHK_A   =  0.10;    //Charge for fewer than 20 checks in $s per check
const float CHK_B   =  0.08;    //Charge for 20-39 checks in $s per check
const float CHK_C   =  0.06;    //Charge for 40-59 checks in $s per check
const float CHK_D   =  0.04;    //Charge for 60 or more checks in $s per check

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    short   checks; //Number of checks used
    float   bnkBal, //Current bank balance
            chkFee, //Check fees in $s
            balTot; //Total balance after fees
    
    //Initialize Variables
    cout<<"Monthly Bank Fees"<<endl;
    cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>bnkBal;
    cin>>checks;
    
    //Map Inputs to Outputs -> Process
    if (checks<20 && checks>=0){
        chkFee=(checks*CHK_A);
    }else if (checks<=39 && checks>=20){
        chkFee=(checks*CHK_B);
    }else if (checks<=59 && checks>=40){
        chkFee=(checks*CHK_C);
    }else if (checks>=60){
        chkFee=(checks*CHK_D);
    }else{
        cout<<"Please enter valid number of checks"<<endl;
    }   
    
    //Display Inputs/Outputs   
    cout<<fixed<<setprecision(2)<<showpoint;
    if (bnkBal>=0 && bnkBal<400){
        float lowBal=15.00f;
        balTot=bnkBal-chkFee-MONFEES-lowBal;
        cout<<"Balance     $"<<setw(9)<<bnkBal<<endl;
        cout<<"Check Fee   $"<<setw(9)<<chkFee<<endl;
        cout<<"Monthly Fee $"<<setw(9)<<MONFEES<<endl;
        cout<<"Low Balance $"<<setw(9)<<lowBal<<endl;
        cout<<"New Balance $"<<setw(9)<<balTot;
    }else if (bnkBal>=400){
        float lowBal=0.00f;
        balTot=bnkBal-chkFee-MONFEES-lowBal;
        cout<<"Balance     $"<<setw(9)<<bnkBal<<endl;
        cout<<"Check Fee   $"<<setw(9)<<chkFee<<endl;
        cout<<"Monthly Fee $"<<setw(9)<<MONFEES<<endl;
        cout<<"Low Balance $"<<setw(9)<<lowBal<<endl;
        cout<<"New Balance $"<<setw(9)<<balTot;
    }else{
                float lowBal=15.00f;
        balTot=bnkBal-chkFee-MONFEES-lowBal;
        cout<<"Balance     $"<<setw(9)<<bnkBal<<endl;
        cout<<"Check Fee   $"<<setw(9)<<chkFee<<endl;
        cout<<"Monthly Fee $"<<setw(9)<<MONFEES<<endl;
        cout<<"Low Balance $"<<setw(9)<<lowBal<<endl;
        cout<<"New Balance $"<<setw(9)<<balTot;
        cout<<"ACOUNT IS OVERDRAWN!"<<endl;
    }
    
    //Exit the Program - Cleanup
    return 0;
}