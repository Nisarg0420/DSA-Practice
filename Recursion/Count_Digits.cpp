/* 1. Count digits of a number using recursion
   5072 → 4
   (Same n%10, n/10 tool you just learned 
    for sum of digits — just count instead 
    of sum) */
    
#include<iostream>
using namespace std;

void f(int n,int count)
{
    if(n<=0)
    {
        cout<<"The Number of Digits are: "<<count<<endl;
        return;
    }
    
    count=count+1;
    
    f(n/10,count);
}

int main()
{
    int n;
    int count=0;
    
    cout<<"Enter the Number: ";
    cin>>n;
    
    f(n,count);
    return 0;
}