// Print Fibonacci Series up to Nth term
// Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.

#include<iostream>
using namespace std;

int f(int n)
{
    if(n<=1)
    {
        return 1;
    }

    int last=f(n-1);
    int slast=f(n-2);

    return last+slast;
}

int main()
{
    int n;

    cout<<"Enter the Value of the n: ";
    cin>>n;

    int result=f(n);

    cout<<"The Fibonacci Number for "<<n<<" index is: "<<result<<endl;
    return 0;
}