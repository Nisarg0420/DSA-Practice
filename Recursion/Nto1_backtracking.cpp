// Print N to 1 using Recursion
// Problem Description: Given an integer N, write a program to print numbers from N to 1 using the backtracking concept

#include<iostream>
using namespace std;

void recursiveNo(int i,int n)
{
    if(i>n)
    {
        return;
    }
    recursiveNo(i+1,n);
    cout<<i<<endl;
}

int main()
{
    int n;

    cout<<"Enter the Number: ";
    cin>>n;

    recursiveNo(1,n);
    return 0;
}