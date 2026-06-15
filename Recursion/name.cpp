// Print Name N times using Recursion
// Problem Description: Given an integer N, write a program to print your name N times.


#include<iostream>
using namespace std;


void recursion(int i,int n)
{
   if(i>n) //Base CASE
   {
     return;
   }
   cout<<"Nisarg";
   recursion(i+1,n); //Moving towards the base case by increasing i
}

int main()
{
    int n;

    cout<<"Enter the Number: ";
    cin>>n;

    recursion(1,n);
    return 0;
}