/* 
 * File:   main.cpp
 * Author: Michael Aguila
 * Created on January 19, 2021, 4:24 PM
 * Purpose:  Menu for assignment 3
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

//Execution Begins Here
int main(int argc, char** argv) {
    //Variables Declarations
    char choice;    
    
    //Display Menu
    cout<<"Assignment 3 Menu"<<endl;
    cout<<"Type 1 for Gaddis Ch4 Problem 8 Name Sorting"<<endl;
    cout<<"Type 2 for Gaddis Ch4 Problem 11 Book Points"<<endl;
    cout<<"Type 3 for Gaddis Ch4 Problem 12 Bank Charges"<<endl;
    cout<<"Type 4 for Gaddis Ch4 Problem 14 Race"<<endl;
    cout<<"Type 5 for Gaddis Ch4 Problem 23 ISP Bill"<<endl;
    cout<<"Type 6 for Savitch Ch3 Problem 1 Rock Paper Scissors"<<endl;
    cout<<"Type 7 for Savitch Ch3 Problem 3 Roman Conversions"<<endl;
    cout<<"Type 8 for Savitch Ch3 Problem 4 Compatible Signs"<<endl;
    cin>>choice;
    
    if(choice == '1'){
            //Declare Variables
            string  nameA,
                    nameB,
                    nameC;

            //Initialize Variables
            cout<<"Sorting Names"<<endl;
            cout<<"Input 3 names"<<endl;
            cin>>nameA;
            cin>>nameB;
            cin>>nameC;

            //Map Inputs to Outputs -> Process
            if (nameA<nameB && nameB<nameC && nameA<nameC)
                cout<<nameA<<endl<<nameB<<endl<<nameC;
            else if (nameA<nameC && nameC<nameB && nameA<nameB)
                cout<<nameA<<endl<<nameC<<endl<<nameB;
            else if (nameB<nameA && nameA<nameC && nameC<nameB)
                cout<<nameB<<endl<<nameA<<endl<<nameC;
            else if (nameB<nameC && nameC<nameA && nameB<nameA)
                cout<<nameB<<endl<<nameC<<endl<<nameA;
            else if (nameC<nameA && nameA<nameB && nameC<nameB)
                cout<<nameC<<endl<<nameA<<endl<<nameB;
            else if(nameC<nameB && nameB<nameA && nameC<nameA)
                cout<<nameC<<endl<<nameB<<endl<<nameA;
            
    }else if (choice=='2'){
                //Declare Variables
                unsigned short  points, //# of points earned
                                books;  //# of books read

                //Initialize Variables
                books=points=0;

                //Map Inputs to Outputs -> Process
                cout<<"Book Worm Points"<<endl;
                cout<<"Input the number of books purchased this month."<<endl;
                cin>>books;

                points = (books<1)?0:
                         (books<2)?5:
                         (books<3)?15:
                         (books<4)?30:60;


                //Display Inputs/Outputs
                cout<<"Books purchased ="<<setw(3)<<books<<endl;
                cout<<"Points earned   ="<<setw(3)<<points;
    }else if (choice=='3'){
            //Constants
            const float MONFEES = 10.00;    //Standard monthly fee
            const float CHK_A   =  0.10;    //Charge for fewer than 20 checks in $s per check
            const float CHK_B   =  0.08;    //Charge for 20-39 checks in $s per check
            const float CHK_C   =  0.06;    //Charge for 40-59 checks in $s per check
            const float CHK_D   =  0.04;    //Charge for 60 or more checks in $s per check
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
    }else if (choice=='4'){
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
    }else if (choice=='5'){
            //Constants
            const float APRICE=9.95f,     //Package A price per month in $s
                        BPRICE=14.95f,    //Package B price per month in $s
                        CPRICE=19.95f,    //Package C price per month in $s
                        AHOURS=10.0f,     //Package A max hours per month
                        BHOURS=20.0f,     //Package B max hours per month
                        AOVER=2.00f,      //Overage charge of package a in $s
                        BOVER=1.00f;      //Overage charge of package b in $s
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
    }else if (choice=='6'){
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
    }else if (choice=='7'){
            //Declare Variables
            unsigned short numCnv;   //User input number for conversion

            //Initialize Variables
            cout<<"Arabic to Roman numeral conversion."<<endl;
            cout<<"Input the integer to convert."<<endl;
            cin>>numCnv;

            //Map Inputs to Outputs -> Process
            if(numCnv>=1000 && numCnv<=3000){
                // Determine 1000s, 100s, 10s,1s
                unsigned    thous,  //thousands           
                            hunds,  //hundreds
                            tens,   //tens
                            ones;   //ones
                thous=numCnv/1000;
                hunds=numCnv%1000/100;
                tens=numCnv%100/10;
                ones=numCnv%10;

                cout<<numCnv<<" is equal to ";

                //Output for the thousands
                cout<<(thous==3?"MMM":
                       thous==2?"MM":
                       thous==1?"M":"");

                //Output for the hundreds 
                cout<<(hunds==9?"CM":
                       hunds==8?"DCCC":
                       hunds==7?"DCC":
                       hunds==6?"DC":
                       hunds==5?"D":
                       hunds==4?"CD":                   
                       hunds==3?"CCC":
                       hunds==2?"CC":
                       hunds==1?"C":"");

                //Output for the tens
                cout<<(tens==9?"XC":
                       tens==8?"LXXX":
                       tens==7?"LXX":
                       tens==6?"LX":
                       tens==5?"L":
                       tens==4?"XL":                   
                       tens==3?"XXX":
                       tens==2?"XX":
                       tens==1?"X":"");

                //Output of the ones
                cout<<(ones==9?"IX":
                       ones==8?"VIII":
                       ones==7?"VII":
                       ones==6?"VI":
                       ones==5?"V":
                       ones==4?"IV":                   
                       ones==3?"III":
                       ones==2?"II":
                       ones==1?"I":"");

            }else
                cout<<numCnv<<" is Out of Range!";
    }else if (choice=='8'){
            //Declare Variables
            string  element,    //Elements in astrology
                    signA,      //User input astrology sign A
                    signB;      //User input astrology sign B

            //Map Inputs to Outputs -> Process
            cout<<"Horoscope Program which examines compatible signs."<<endl;
            cout<<"Input 2 signs."<<endl;
            cin>>signA;
            cin>>signB;

            //Fire element compatability
            if (signA == "Aries" || signA == "Leo" || signA == "Sagittarius"){
                if (signB == "Aries" || signB == "Leo" || signB == "Sagittarius"){
                    element="Fire";
                    cout<<signA<<" and "<<signB<<" are compatible "<<element<<" signs.";    
                }
                else
                    cout<<signA<<" and "<<signB<<" are not compatible signs.";
            }
            //Earth element compatibility
            else if (signA == "Taurus" || signA == "Virgo" || signA == "Capricorn"){
                if (signB == "Taurus" || signB == "Virgo" || signB == "Capricorn"){
                    element="Earth";
                    cout<<signA<<" and "<<signB<<" are compatible "<<element<<" signs.";    
                }
                else
                    cout<<signA<<" and "<<signB<<" are not compatible signs.";
            }
            //Air element compatibility
            else if (signA == "Gemini" || signA == "Libra" || signA == "Aquarius"){
                if (signB == "Gemini" || signB == "Libra" || signB == "Aquarius"){
                    element="Air";
                    cout<<signA<<" and "<<signB<<" are compatible "<<element<<" signs.";    
                }
                else
                    cout<<signA<<" and "<<signB<<" are not compatible signs.";
            }
            //Water element compatibility
            else if (signA == "Cancer" || signA == "Scorpio" || signA == "Pisces"){
                if (signB == "Cancer" || signB == "Scorpio" || signB == "Pisces"){
                    element="Water";
                    cout<<signA<<" and "<<signB<<" are compatible "<<element<<" signs.";    
                }
                else
                    cout<<signA<<" and "<<signB<<" are not compatible signs.";
            }
            else
                cout<<"Please enter a valid sign.";
    }else{
        cout<<"Not an Option!"<<endl;
    }      
              
    //Exit the Program - Cleanup
    return 0;
}