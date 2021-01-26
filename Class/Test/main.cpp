#include <iostream>

using namespace std;

int main()
{
    //declare and initialize variables we need
    int userInt, totalSum = 0;

    //prompt user to enter input then read
    cout << "Enter a positive integer number: ";
    cin >> userInt;

    //while loop to validate input
    while(userInt <= 0){
        cout << "Only positive integers accepted! ";
        cout << "Try again: ";
        cin >> userInt;
    }

    //for loop to add numbers together
    for(int i = 1; i <= userInt; i++){
        totalSum += i;
    }

    //display result
    cout << "The sum of the numbers from 1 to ";
    cout << userInt << " is " << totalSum;

    //return 0 to mark successful termination
    return 0;
}
