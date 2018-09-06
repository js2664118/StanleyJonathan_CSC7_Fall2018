/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on September 6th, 2018, 8:30 AM
 * Purpose:  Prove (p&&q)||~(p||q) = p^q and (p||q)&&~(p&&q)=p^q
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
    
    //Input or initialize values Here
    p=true;
    q=true;
    
    //Process/Calculations Here
    //header
    cout<<"Prove: (p&&q)||~(p||q)=p^q and (p||q)&&~(p&&q)=p^q"<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"(p&&q) ~(p||q) p^q (p||q) ~(p&&q) p^q"<<endl;
    //Proof
    cout<<setw(3)<<((p&&q)?'T':'F')<<setw(9)<<(!(p||q)?'T':'F')<<setw(5)<<((p^q)?'T':'F')
            <<setw(6)<<((p||q)?'T':'F')<<setw(8)<<(!(p&&q)?'T':'F')<<setw(6)<<
            ((p^q)?'T':'F')<<endl;
    
    //Output Located Here

    //Exit
    return 0;
}

