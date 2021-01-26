/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 25, 2021, 3:11 PM
 * Purpose:  Menu for assignment 4
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int   choice; //Menu choice
    char  again;  //Repeat menu again
    
    do{
    //Display menu
    cout<<"Assignment 3 Menu"<<endl;
    cout<<"Type  1 for Gaddis  Ch5 Problem  1 Sum"<<endl;
    cout<<"Type  2 for Gaddis  Ch5 Problem  7 Pay in Pennies"<<endl;
    cout<<"Type  3 for Gaddis  Ch5 Problem 13 Minimum Maximum"<<endl;
    cout<<"Type  4 for Gaddis  Ch5 Problem 22 Rectangle"<<endl;
    cout<<"Type  5 for Gaddis  Ch5 Problem 23 Pattern"<<endl;
    cout<<"Type  6 for Savitch Ch4 Problem  1 Miles per gallon"<<endl;
    cout<<"Type  7 for Savitch Ch4 Problem  2 Miles per gallon 2 Cars"<<endl;
    cout<<"Type  8 for Savitch Ch4 Problem  4 Inflation"<<endl;
    cout<<"Type  9 for Savitch Ch4 Problem  5 Inflation with Estimates"<<endl;
    cout<<"Type 10 for Savitch Ch4 Problem  9 Parameter"<<endl;
    cin>>choice;
    
    if(choice == 1){
        //Gaddis  Ch5 Problem  1 Sum
        //Declare Variables
        int usrNum,//Positive integer entered by user
            sum=0;   //Sum of all integers

        //Initialize or input i.e. set variable values
        cin>>usrNum;

        //Addition of all integer up to number entered
        for(int num=1; num<=usrNum; num++){
            sum += num;
        }

        //Display the outputs
        cout<<"Sum = "<<sum;
    
    }else if (choice == 2){
        //Gaddis  Ch5 Problem  7 Pay in Pennies
        //Declare Variables
        int   numDays, //Number of days worked
               daySal, //Daily salary in pennies
                total, //Total salary in amount of pennies
                dolTot;//Total salary in dollars

        //Initialize Variables
        numDays=0;
        daySal=1;
        total=dolTot=0;

        //cout<<"Please enter number of days worked."<<endl;
        cin>>numDays;//User inputs number of days worked

        //Validate inputed days
        while (numDays<0){
            cout<<"Please enter number of days greater than 0 days!"<<endl;
            cin>>numDays;
        }
        //Map Inputs to Outputs -> Process
        for (int days=1; days<=numDays; days++){
           total += daySal;
           daySal*=2;
        }

        dolTot=total/100;

         //Display Inputs/Outputs
        cout<<"Pay = $"<<dolTot<<".";
        if(total%100 < 10)
            cout<<"0"<<total%100;
        else if(total%100>=10)
            cout<<total%100;
    
    }else if (choice == 3){
        //Gaddis  Ch5 Problem 13 Minimum Maximum
        //Declare Variables
        int number, //User inputed number
            minNum, //Smallest number user inputed
            maxNum; //Largest number user inputed

        //Initialize Variables

        //cout<<"Enter series of integers and then enter -99 when finished."<<endl;
        cin>>number;
        minNum=maxNum=number;

        //Map Inputs to Outputs -> Process
        //Determine minimum and maximum user inputed values
        while(number != -99){
            if(minNum>number){
                minNum=number;
            }
            if (maxNum<number){
                maxNum=number;
            }

            cin>>number;
        }
        //Display Inputs/Outputs
        cout<<"Smallest number in the series is "<<minNum<<endl;
        cout<<"Largest  number in the series is "<<maxNum;
    
    }else if (choice == 4){
        //4 for Gaddis  Ch5 Problem 22 Rectangle       
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
        
    }else if (choice == 5){
        //5 for Gaddis  Ch5 Problem 23 Pattern       
        //Declare Variables
        unsigned short  steps;  //Number of colums
        char            plus;   //Plus sign

        //Initialize or input i.e. set variable values
        steps=0;
        plus='+';
        cin>>steps;

        //First triangle pattern
        for(unsigned short i=0; i<steps; i++){
                for(unsigned short j=0; j<=i; j++){
                    cout<<plus;
                }
            cout<<endl<<endl;
        }

        //Second triangle pattern
        for(unsigned short i=0; i<(steps-1); i++){
                for(unsigned short j=steps; j>i; j--){
                    cout<<plus;
                }    
            cout<<endl<<endl;
        }

        //Last plus
        cout<<plus;
        
    }else if (choice == 6){
        //Savitch Ch4 Problem  1 Miles per gallon   
        //Global Constants
        //Math, Science, Universal, Conversions, High Dimensioned Arrays
        const float LGCONV=0.264179f; //Liter to gallon conversion
        //Declare Variables
        float gasL, //# of liters of gasoline
              gasG, //# of gallons of gasoline
              miles,//# of miles traveled
              mpg;  //miles per gallon
        char  again;//Y or N input for repeat

        //Initialize Variables
        gasL=gasG=miles=mpg=0;

        //Map Inputs to Outputs -> Process
        do{
            //User inputs gas in liters and number of miles traveled
            cout<<"Enter number of liters of gasoline:"<<endl<<endl;
            cin>>gasL;
            cout<<"Enter number of miles traveled:"<<endl<<endl;
            cin>>miles;

            //Conversion of liters to gallons
            gasG=LGCONV*gasL;

            //Calculation of MPG
            mpg=miles/gasG;

            //Formatting
            cout<<fixed<<setprecision(2)<<showpoint;

            //Display Inputs/Outputs
            cout<<"miles per gallon:"<<endl;
            cout<<mpg<<endl;
            cout<<"Again:"<<endl;
            cin>>again;

            if(again=='y'||again=='Y'){
                cout<<endl;
            }

        }
        while(again=='y'||again=='Y');
    
    }else if (choice == 7){
        //Savitch Ch4 Problem  2 Miles per gallon 2 Cars 
        //Global Constants
        //Math, Science, Universal, Conversions, High Dimensioned Arrays
        const float LGCONV=0.264179f; //Liter to gallon conversion
        //Declare Variables
        float gasL1, //# of liters of gasoline of Car 1
              gasG1, //# of gallons of gasoline of Car 1
              miles1,//# of miles traveled of Car 1
              mpg1,  //miles per gallon of Car 1
              gasL2, //# of liters of gasoline of Car 2
              gasG2, //# of gallons of gasoline of Car 2
              miles2,//# of miles traveled of Car 2
              mpg2;  //miles per gallon of Car 2
        char  again;//Y or N input for repeat

        //Initialize Variables
        gasL1=gasG1=miles1=mpg1=0;
        gasL2=gasG2=miles2=mpg2=0;

        //Formatting
        cout<<fixed<<setprecision(2)<<showpoint;

        //Map Inputs to Outputs -> Process
        do{
            //User inputs gas in liters and number of miles traveled of Car 1
            cout<<"Car 1"<<endl;
            cout<<"Enter number of liters of gasoline:"<<endl;
            cin>>gasL1;
            cout<<"Enter number of miles traveled:"<<endl;
            cin>>miles1;

            //Conversion of liters to gallons of Car 1
            gasG1=LGCONV*gasL1;

            //Calculation of MPG of Car 1
            mpg1=miles1/gasG1;

            //Display output of Car 1
            cout<<"miles per gallon: "<<mpg1<<endl<<endl;

            //User inputs gas in liters and number of miles traveled of Car 2
            cout<<"Car 2"<<endl;
            cout<<"Enter number of liters of gasoline:"<<endl;
            cin>>gasL2;
            cout<<"Enter number of miles traveled:"<<endl;
            cin>>miles2;

            //Conversion of liters to gallons of Car 1
            gasG2=LGCONV*gasL2;

            //Calculation of MPG of Car 1
            mpg2=miles2/gasG2;

            //Display output of Car 1
            cout<<"miles per gallon: "<<mpg2<<endl<<endl;

            //Determine which car is more fuel efficient
            cout<<(mpg1>mpg2?"Car 1 is more fuel efficient":
                   mpg1<mpg2?"Car 2 is more fuel efficient":
                   mpg1==mpg2?"Fuel efficiency is equal":"");
            cout<<endl<<endl;

            //Ask User to repeat program
            cout<<"Again:"<<endl;
            cin>>again;

            if(again=='y'||again=='Y'){
                cout<<endl;
            }

        }
        while(again=='y'||again=='Y');
    
    }else if (choice == 8){
        //Savitch Ch4 Problem  4 Inflation       
        //Global Constants
        //Math, Science, Universal, Conversions, High Dimensioned Arrays
        const float PERCONV=100.0f; //Percentage conversion
        //Declare Variables
        float   curPrce, //Current product price in dollars
                yaPrce,  //Year ago product price in dollars
                infDec,  //Inflation in decimal
                infPer;  //Inflation in percentage
        char    again;   //Y or N to repeat program

        //Initialize Variables
        curPrce=yaPrce=infDec=infPer=0;

        //Map Inputs to Outputs -> Process
        cout<<fixed<<setprecision(2)<<showpoint;//Formatting
        do{
            //User inputs price of product
            cout<<"Enter current price:"<<endl;
            cin>>curPrce;
            cout<<"Enter year-ago price:"<<endl;
            cin>>yaPrce;

            //Calculate inflation rate
            infDec=(curPrce-yaPrce)/yaPrce;
            infPer=infDec*PERCONV;

            //Display Inputs/Outputs
            cout<<"Inflation rate: "<<infPer<<"%"<<endl<<endl;

            //Repeat program
            cout<<"Again:"<<endl;
            cin>>again;

            if (again=='y'||again=='Y'){
                cout<<endl;
            }

        }while(again=='y'||again=='Y');
    
    }else if (choice == 9){
        //Savitch Ch4 Problem  5 Inflation with Estimates       
        //Global Constants
        //Math, Science, Universal, Conversions, High Dimensioned Arrays
        const float PERCONV=100.0f; //Percentage conversion
        //Declare Variables
        float   curPrce, //Current product price in dollars
                yaPrce,  //Year ago product price in dollars
                infDec,  //Inflation in decimal
                infPer,  //Inflation in percentage
                yearOne, //Estimated product price in one year
                yearTwo; //Estimated product price in two years
        char    again;   //Y or N to repeat program

        //Initialize Variables
        curPrce=yaPrce=infDec=infPer=0;


        //Map Inputs to Outputs -> Process
        cout<<fixed<<setprecision(2)<<showpoint;//Formatting
        do{
            //User inputs price of product
            cout<<"Enter current price:"<<endl;
            cin>>curPrce;
            cout<<"Enter year-ago price:"<<endl;
            cin>>yaPrce;

            //Calculate inflation rate
            infDec=(curPrce-yaPrce)/yaPrce;
            infPer=infDec*PERCONV;

            //Calculate price in one year
            yearOne=(infDec*curPrce)+curPrce;

            //Calculate price in two years
            yearTwo=(infDec*yearOne)+yearOne;

            //Display Inputs/Outputs
            cout<<"Inflation rate: "<<infPer<<"%"<<endl<<endl;
            cout<<"Price in one year: $"<<yearOne<<endl;
            cout<<"Price in two year: $"<<yearTwo<<endl<<endl;

            //Repeat program
            cout<<"Again:"<<endl;
            cin>>again;

            if (again=='y'||again=='Y'){
                cout<<endl;
            }

        }while(again=='y'||again=='Y');
    
    }else if (choice == 10){
        //Savitch Ch4 Problem  9 Parameter  
        //Declare Variables
        float numA, //User inputed float
              numB, //User inputed float
              numC; //User imputed float

        //Initialize Variables
        numA=numB=numC=0;

        cout<<"Enter first number:"<<endl<<endl;
        cin>>numA;
        cout<<"Enter Second number:"<<endl<<endl;
        cin>>numB;
        cout<<"Enter third number:"<<endl<<endl;
        cin>>numC;

        //Find the max of the first two inputs    
        cout<<"Largest number from two parameter function:"<<endl;
        (numA>numB ? cout<<numA : cout<<numB);
        cout<<endl<<endl;

        //Find the max of all three inputs
        cout<<"Largest number from three parameter function:"<<endl;
        (numA>numB&&numA>numC ? cout<<numA:
         numB>numA&&numB>numC ? cout<<numB: cout<<numC);
        cout<<endl;
    
    }else{
        //Choice validation
        cout<<"Please enter valid choice!"<<endl;
    }
    
    //Repeat menu
    cout<<endl<<"Go Back to Main Menu (Y/N)?: "<<endl;
    cin>>again;
   
    }while(again=='y' || again=='Y');
   
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}