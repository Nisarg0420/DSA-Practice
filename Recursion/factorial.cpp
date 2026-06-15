//Factorial using the functional recursion

#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int n;
    
    cout<<"Enter the Number: ";
    cin>>n;
    
    int f=fact(n);
    cout<<"The Factorial of "<<n<<" is: "<<f<<endl;
    
    return 0;
}