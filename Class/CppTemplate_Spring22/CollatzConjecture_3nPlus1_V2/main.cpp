/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on April 28th, 2022, 11:49 AM
 * Purpose:  Collatz Conjecture
 */

//System Libraries
#include <iostream>  //Input/output Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes
void thrNP1(unsigned int);//Collatz Conjecture

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    unsigned int seqStrt;
    
    //Initial Variables
    cout<<"This program outputs the Collatz Sequence"<<endl;
    cout<<"Input the initial sequence value"<<endl;
    cin>>seqStrt;
    
    //Map the Inputs to the Outputs
    thrNP1(seqStrt);

    //Exit the code
    return 0;
}

void thrNP1(unsigned int n){
    int cnt=-1;
    while(n>1){
        cout<<n<<" ";
        cnt++;
        if(cnt%10==9)cout<<endl;
        if(n%2){
             //2*n  + n  + 1 = 3n + 1
            n=(n<<1) + n + 1;
        }else{
            n>>=1;//n/=2  Division by 2 is Left Bit Shift 1
        }
    }
    cout<<n<<endl;
}