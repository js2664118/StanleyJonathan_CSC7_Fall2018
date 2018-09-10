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
void mkcard(int[],int);//function to make a random debit card
void dblcard(int[],int);//function to double card and check if its valid

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int SIZE=10;// size of array
    int card[SIZE];//array of digits that make debit card
    
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
        if (i%2!=0)debit[i]=debit[i]*2;
        cout<<debit[i];
    }
    int one=0;//tens place of digit
    int two=0;//ones place of digit
    int sum=0;//sum of digits
    int total=0;//total sum of digits
    cout<<endl;
    cout<<"Sum of digits: "<<setw(6);
    for(int j=0;j<size;j++){
        if (j%2!=0){
            if (debit[j]==10){
                cout<<debit[j]/10;
            }
            else if(debit[j]>10){
                one=debit[j]/10;
                two=debit[j]-10;
                debit[j]=one+two;
                cout<<debit[j];
            }
        }
        else cout<<debit[j];
    } 
    for (int h=0;h<size;h++)sum+=debit[h];
    cout<<" = "<<sum<<endl;
    total=(sum*9)%10;
    if ((total+sum)%10==0)cout<<"This is a valid card"<<endl;
    cout<<total<<endl;
}
