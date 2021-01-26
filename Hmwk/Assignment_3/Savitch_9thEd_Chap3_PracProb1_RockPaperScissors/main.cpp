/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 19, 2021, 11:57 AM
 * Purpose:  Scoring the rock, paper, scissors game
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //string
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
     char   plyr1,  //Player one's choice
            plyr2;  //Player two's choice
    
    //Initialize or input i.e. set variable values
   
    //Map inputs -> outputs
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>plyr1;
    cin>>plyr2;
    
    switch (plyr1){
        case 'P':
                switch(plyr2){
                    case 'R':
                        cout<<"Paper covers rock.";
                        break;
                    case 'S':
                        cout<<"Scissors cuts paper.";
                        break;
                    case 'P':
                        cout<<"Nobody wins.";
                        break;
                     case 'r':
                        cout<<"Paper covers rock.";
                        break;
                    case 's':
                        cout<<"Scissors cuts paper.";
                        break;
                    case 'p':
                        cout<<"Nobody wins.";
                        break;
                    default:
                        cout<<"You did not enter R/r, P/p, or S/s."<<endl;
                }
            break;
        case 'R':
                switch(plyr2){
                    case 'R':
                        cout<<"Nobody wins.";
                        break;
                    case 'S':
                        cout<<"Rock breaks scissors.";
                        break;
                    case 'P':
                        cout<<"Paper covers rock.";
                        break;
                    case 'r':
                        cout<<"Nobody wins.";
                        break;
                    case 's':
                        cout<<"Rock breaks scissors.";
                        break;
                    case 'p':
                        cout<<"Paper covers rock.";
                        break;
                    default:
                        cout<<"You did not enter R/r, P/p, or S/s."<<endl;
                }
            break;  
        case 'S':
                switch(plyr2){
                    case 'R':
                        cout<<"Rock breaks scissors.";
                        break;
                    case 'S':
                        cout<<"Nobody wins.";
                        break;
                    case 'P':
                        cout<<"Scissors cuts paper.";
                        break;
                    case 'r':
                        cout<<"Rock breaks scissors.";
                        break;
                    case 's':
                        cout<<"Nobody wins.";
                        break;
                    case 'p':
                        cout<<"Scissors cuts paper.";
                        break;
                    default:
                        cout<<"You did not enter R/r, P/p, or S/s."<<endl;
                }
            break;
        case 'p':
                switch(plyr2){
                    case 'r':
                        cout<<"Paper covers rock.";
                        break;
                    case 's':
                        cout<<"Scissors cuts paper.";
                        break;
                    case 'p':
                        cout<<"Nobody wins.";
                        break;
                    case 'R':
                        cout<<"Paper covers rock.";
                        break;
                    case 'S':
                        cout<<"Scissors cuts paper.";
                        break;
                    case 'P':
                        cout<<"Nobody wins.";
                        break;
                    default:
                        cout<<"You did not enter R/r, P/p, or S/s."<<endl;
                }
            break;
        case 'r':
                switch(plyr2){
                    case 'r':
                        cout<<"Nobody wins.";
                        break;
                    case 's':
                        cout<<"Rock breaks scissors.";
                        break;
                    case 'p':
                        cout<<"Paper covers rock.";
                        break;
                    case 'R':
                        cout<<"Nobody wins.";
                        break;
                    case 'S':
                        cout<<"Rock breaks scissors.";
                        break;
                    case 'P':
                        cout<<"Paper covers rock.";
                        break;
                    default:
                        cout<<"You did not enter R/r, P/p, or S/s."<<endl;
                }
            break;  
        case 's':
                switch(plyr2){
                    case 'r':
                        cout<<"Rock breaks scissors.";
                        break;
                    case 's':
                        cout<<"Nobody wins.";
                        break;
                    case 'p':
                        cout<<"Scissors cuts paper.";
                        break;
                    case 'R':
                        cout<<"Rock breaks scissors.";
                        break;
                    case 'S':
                        cout<<"Nobody wins.";
                        break;
                    case 'P':
                        cout<<"Scissors cuts paper.";
                        break;
                    default:
                        cout<<"You did not enter R/r, P/p, or S/s."<<endl;
                }
            break;
        
            
        default:
        cout<<"You did not enter R/r, P/p, or S/s."<<endl;
    }
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}