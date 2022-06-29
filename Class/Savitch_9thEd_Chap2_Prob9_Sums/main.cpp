/* 
 * File:   main.cpp
 * Author: Dr. Mark Lehr
 * Created on March 3rd, 2022, 11:25 AM
 * Purpose:  Neg/Pos/Total Integer Sums
 */

//System Libraries
#include <iostream>  //Input/output Library
using namespace std;

//User Libraries

//Global Constants
//Physics/Chemistry/Math/Conversion Higher Dimension Only

//Function Prototypes

//Program Execution Begins Here!!!
int main(int argc, char** argv) {
    //Set the Random Number Seed
    
    //Declare Variables
    int negSum,//Negative Integer Sum
        posSum,//Positive Integer Sum
       totlSum,//Total Integer Sum
         input;//Integer to input 10x's
    
    //Initial Variables
    negSum=posSum=totlSum=0;
    
    //Map the Inputs to the Outputs
    cout<<"This program adds 10 +- Integer Values"<<endl;
    
    cout<<"Input 1 integer at a time"<<endl;
    cin>>input;
    negSum += input>0?0:input;//Example of Ternary Operator
    posSum += input>0?input:0;//Another Example of Ternary Operator

    cout<<"Input 1 integer at a time"<<endl;
    cin>>input;
    negSum += input>0?0:input;//Example of Ternary Operator
    posSum += input>0?input:0;//Another Example of Ternary Operator

    cout<<"Input 1 integer at a time"<<endl;
    cin>>input;
    negSum += input>0?0:input;//Example of Ternary Operator
    posSum += input>0?input:0;//Another Example of Ternary Operator

    cout<<"Input 1 integer at a time"<<endl;
    cin>>input;
    negSum += input>0?0:input;//Example of Ternary Operator
    posSum += input>0?input:0;//Another Example of Ternary Operator

    cout<<"Input 1 integer at a time"<<endl;
    cin>>input;
    negSum += input>0?0:input;//Example of Ternary Operator
    posSum += input>0?input:0;//Another Example of Ternary Operator

    cout<<"Input 1 integer at a time"<<endl;
    cin>>input;
    negSum += input>0?0:input;//Example of Ternary Operator
    posSum += input>0?input:0;//Another Example of Ternary Operator

    cout<<"Input 1 integer at a time"<<endl;
    cin>>input;
    negSum += input>0?0:input;//Example of Ternary Operator
    posSum += input>0?input:0;//Another Example of Ternary Operator

    cout<<"Input 1 integer at a time"<<endl;
    cin>>input;
    negSum += input>0?0:input;//Example of Ternary Operator
    posSum += input>0?input:0;//Another Example of Ternary Operator

    cout<<"Input 1 integer at a time"<<endl;
    cin>>input;
    negSum += input>0?0:input;//Example of Ternary Operator
    posSum += input>0?input:0;//Another Example of Ternary Operator

    cout<<"Input 1 integer at a time"<<endl;
    cin>>input;
    negSum += input>0?0:input;//Example of Ternary Operator
    posSum += input>0?input:0;//Another Example of Ternary Operator
    
    //Calculate the Total Sum
    totlSum=negSum+posSum;
    
    //Display the Inputs and Outputs
    cout<<endl;
    cout<<"The negative sum = "<<negSum<<endl;
    cout<<"The positive sum = "<<posSum<<endl;
    cout<<"The total    sum = "<<totlSum<<endl;

    //Exit the code
    return 0;
}