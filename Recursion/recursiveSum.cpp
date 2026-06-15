// Sum of first N Natural Numbers
// Problem Statement: Given a number ‘N’, find out the sum of the first N natural numbers .

#include<iostream>
using namespace std;

//This method is simple Parameterized Recursion brute force appraoch where we used the parameter and update them
/* void recursiveSum(int i,int sum)
{
    if(i<1)
    {
        cout<<"The Sum is: "<<sum<<endl;
        return;
    }
    
    recursiveSum(i-1,sum+i);
}*/

//Another method is Functional Recursion where we dont use the parameters

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }

    return n+sum(n-1);
}

int main()
{
    int n;

    cout<<"Enter the Number: ";
    cin>>n;

    //recursiveSum(n,0);
    int ans=sum(n);
    cout<<"The Sum is: "<<ans<<endl;
    return 0;
}