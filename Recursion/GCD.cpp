/* GCD of two numbers using recursion
   You already know GCD iteratively.
   Just rewrite it with a function 
   calling itself */
   
#include<iostream>
using namespace std;

void f(int n1,int n2,int i,int gcd)
{
    if(i>n1)
    {
        cout<<"The GCD of two number is: "<<gcd<<endl;
        return;
    }
    
    if(n1%i==0 && n2%i==0)
    {
        gcd=i;
    }
    
    f(n1,n2,i+1,gcd);
}

int main()
{
    int n1,n2;
    
    cout<<"Enter the Number 1: ";
    cin>>n1;
    
    cout<<"Enter the Number 2: ";
    cin>>n2;
    
    f(n1,n2,1,0);
    return 0;
}