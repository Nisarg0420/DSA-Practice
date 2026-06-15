// Find GCD of two numbers
// Problem Statement: Given two integers N1 and N2, find their greatest common divisor.

#include<iostream>
using namespace std;

void gcd(int n1,int n2)
{
    int i,gcd=1;

    for(i=1;i<=min(n1,n2);i++)
    {
        if((n1%i==0) && (n2%i==0))
        {
            gcd=i;
        }
    }

    cout<<"The Greatest Common Divisor is: "<<gcd<<endl;

}

int main()
{
    int no1,no2;

    cout<<"Enter the Number 1: ";
    cin>>no1;

    cout<<"Enter the Number 2: ";
    cin>>no2;

    gcd(no1,no2);
    return 0;
}