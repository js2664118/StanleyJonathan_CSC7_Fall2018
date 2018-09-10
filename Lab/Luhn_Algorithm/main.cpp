/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on September 10, 2018, 11:00 AM
 * Purpose:  Luhn Algorithm
 */

//System Libraries Here
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void mkcard(int[],int);
void dblcard(int[],int);
void chkcard(int[],int);
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int SIZE=10;
    int card[SIZE];
    
    //Input or initialize values Here
    srand(static_cast<unsigned int>(time(0)));
    
    //Process/Calculations Here
    mkcard(card,SIZE);
    dblcard(card,SIZE);
    
    //Output Located Here

    //Exit
    return 0;
}
void mkcard(int debit[],int size){
     for (int count=0;count<size;count++){
        debit[count]=rand()%10;
    }
}
void dblcard(int debit[],int size){
    cout<<"Card Number: "<<setw(8);
    for (int count=0;count<size;count++)cout<<debit[count];
    cout<<endl;
    cout<<"Double every other: ";
    for (int i=0;i<size;i++){
        if (i%2!=0){
            if (debit[i]==1)debit[i]++;
            else debit[i]=debit[i]*2;
        }
        cout<<debit[i];
    }
}
void chkcard(int debit[], int size){
    
}