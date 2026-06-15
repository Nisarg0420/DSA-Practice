// Print N to 1 using Recursion
// Problem Description: Given an integer N, write a program to print numbers from N to 1.


#include<iostream>
using namespace std;

void recursiveNo(int i,int n)
{
    if(i<1)
    {
        return;
    }

    cout<<i<<endl;
    recursiveNo(i-1,n);
}

int main()
{
    int n;
    
    cout<<"Enter the Number: ";
    cin>>n;

    recursiveNo(n,n);
    return 0;
}