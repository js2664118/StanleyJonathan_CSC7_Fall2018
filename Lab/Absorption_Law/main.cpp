/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on September 6th, 2018, 11:30 AM
 * Purpose:  Prove the absorption law
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    bool p,q;
    
    //Process/Calculations Here
    //Header
    cout<<"p q p||(p&&q) p&&(p||q)"<<endl;
    //First Row
    p=true;
    q=true;
    cout<<(p?'T':'F')<<setw(2)<<(q?'T':'F')<<setw(6)<<((p||(p&&q))?'T':'F')<<
            setw(9)<<((p&&(p||q))?'T':'F')<<endl;
    
    //Second Row
    p=true;
    q=false;
    cout<<(p?'T':'F')<<setw(2)<<(q?'T':'F')<<setw(6)<<((p||(p&&q))?'T':'F')<<
            setw(9)<<((p&&(p||q))?'T':'F')<<endl;
    
    //Third Row
    p=false;
    q=true;
    cout<<(p?'T':'F')<<setw(2)<<(q?'T':'F')<<setw(6)<<((p||(p&&q))?'T':'F')<<
            setw(9)<<((p&&(p||q))?'T':'F')<<endl;
    
    //Fourth Row
    p=false;
    q=false;
    cout<<(p?'T':'F')<<setw(2)<<(q?'T':'F')<<setw(6)<<((p||(p&&q))?'T':'F')<<
            setw(9)<<((p&&(p||q))?'T':'F')<<endl;
    
    
    //Output Located Here    

    //Exit
    return 0;
}


