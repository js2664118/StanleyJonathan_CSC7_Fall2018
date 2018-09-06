/* 
 * File:   main.cpp
 * Author: Jonathan Stanley
 * Created on September 6th, 2018, 8:30 AM
 * Purpose:  Truth table
 */

//System Libraries Here
#include <iostream>
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
    
    //Process/Calculations Here
    cout<<"p q ~p ~q p&&q p||q p^q p^q^q p^q^p !(p&&q) !p||!q !(p||q) !p^!q"<<endl;
    
    //First row
    p=true;
    q=true;
    cout<<(p?'T':'F')<<" "<<
          (q?'T':'F')<<"  "<<
          (!p?'T':'F')<<"  "<<
          (!q?'T':'F')<<"   "<<
          ((p&&q)?'T':'F')<<"    "<<
          ((p||q)?'T':'F')<<"   "<<
          ((p^q)?'T':'F')<<"    "<<
          ((p^q^q)?'T':'F')<<"     "<<
          ((p^q^p)?'T':'F')<<"      "<<
          (!(p&&q)?'T':'F')<<"       "<<
          ((!p||!q)?'T':'F')<<"       "<<
          (!(p||q)?'T':'F')<<"     "<<
          ((!p^!q)?'T':'F')<<"     "<<endl;
    
    //Second Row
    p=true;
    q=false;
    cout<<(p?'T':'F')<<" "<<
          (q?'T':'F')<<"  "<<
          (!p?'T':'F')<<"  "<<
          (!q?'T':'F')<<"   "<<
          ((p&&q)?'T':'F')<<"    "<<
          ((p||q)?'T':'F')<<"   "<<
          ((p^q)?'T':'F')<<"    "<<
          ((p^q^q)?'T':'F')<<"     "<<
          ((p^q^p)?'T':'F')<<"      "<<
          (!(p&&q)?'T':'F')<<"       "<<
          ((!p||!q)?'T':'F')<<"       "<<
          (!(p||q)?'T':'F')<<"     "<<
          ((!p^!q)?'T':'F')<<"     "<<endl;
    
    //Third Row
    p=false;
    q=true;
    cout<<(p?'T':'F')<<" "<<
          (q?'T':'F')<<"  "<<
          (!p?'T':'F')<<"  "<<
          (!q?'T':'F')<<"   "<<
          ((p&&q)?'T':'F')<<"    "<<
          ((p||q)?'T':'F')<<"   "<<
          ((p^q)?'T':'F')<<"    "<<
          ((p^q^q)?'T':'F')<<"     "<<
          ((p^q^p)?'T':'F')<<"      "<<
          (!(p&&q)?'T':'F')<<"       "<<
          ((!p||!q)?'T':'F')<<"       "<<
          (!(p||q)?'T':'F')<<"     "<<
          ((!p^!q)?'T':'F')<<"     "<<endl;
    
    //Fourth Row
    p=false;
    q=false;
    cout<<(p?'T':'F')<<" "<<
          (q?'T':'F')<<"  "<<
          (!p?'T':'F')<<"  "<<
          (!q?'T':'F')<<"   "<<
          ((p&&q)?'T':'F')<<"    "<<
          ((p||q)?'T':'F')<<"   "<<
          ((p^q)?'T':'F')<<"    "<<
          ((p^q^q)?'T':'F')<<"     "<<
          ((p^q^p)?'T':'F')<<"      "<<
          (!(p&&q)?'T':'F')<<"       "<<
          ((!p||!q)?'T':'F')<<"       "<<
          (!(p||q)?'T':'F')<<"     "<<
          ((!p^!q)?'T':'F')<<"     "<<endl;
    
    //Output Located Here
    

    //Exit
    return 0;
}
