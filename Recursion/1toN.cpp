// Print 1 to N using Recursion
// Problem Description: Given an integer N, write a program to print numbers from 1 to N.

#include<iostream>
using namespace std;

void recursiveNo(int i,int n)
{
    if(i>n)
    {
        return;
    }
    cout<<i<<endl;
    recursiveNo(i+1,n);
}

int main()
{
    int n;

    cout<<"Enter the Number: ";
    cin>>n;

    recursiveNo(1,n);
}