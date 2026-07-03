/* GCD of two numbers using recursion
   You already know GCD iteratively.
   Just rewrite it with a function 
   calling itself */
   
#include<iostream>
using namespace std;

void f(int n1,int n2)
{
    if(n1==0)
    {
        cout<<"The GCD of the two numbers is: "<<n2<<endl;
        return;
    }
    
    if(n2==0)
    {
        cout<<"The GCD of the two number is: "<<n1<<endl;
        return;
    }

    if(n1>n2)
    {
        n1=n1%n2;
    }
    else
    {
        n2=n2%n1;
    }

    f(n1,n2);
}

int main()
{
    int n1,n2;
    
    cout<<"Enter the Number 1: ";
    cin>>n1;
    
    cout<<"Enter the Number 2: ";
    cin>>n2;
    
    f(n1,n2);
    return 0;
}