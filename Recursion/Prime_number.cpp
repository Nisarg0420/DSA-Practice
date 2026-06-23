/* Check if a number is Prime
using recursion

Example:
N = 7  → True (prime)
N = 10 → False (not prime)

Hint: Check divisibility
from 2 to N-1 recursively
*/

#include<iostream>
using namespace std;

bool f(int n,int i)
{
    if(i*i>n)  //"I have crossed √n. If no factor was found until now, no factor will ever be found."
    {
        return true;
    }
    
    if(n % i == 0)
    {
        return false;
    }
    
    return f(n,i+1);
}

int main()
{
    int n;
    
    cout<<"Enter the Number: ";
    cin>>n;
    
    bool result=f(n,2);
    
    if(result==1)
    {
        cout<<"The Number is Prime Number!"<<endl;
    }
    else
    {
        cout<<"The Number is not a Prime Number!"<<endl;
    }
    return 0;
}