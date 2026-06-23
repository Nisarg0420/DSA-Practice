/* 2. Reverse a number using recursion
   1234 → 4321
   (Same tool again — build a new number 
    instead of summing)
*/

#include<iostream>
using namespace std;

void f(int n,int lastDigit,int reverse)
{
    if(n<=0)
    {
        cout<<"The Reverse of the Number: "<<reverse<<endl;
        return;
    }
    
    lastDigit=n%10;
    reverse=(reverse*10)+lastDigit;
    
    f(n/10,lastDigit,reverse);
}

int main()
{
    int n;
    
    cout<<"Enter the N: ";
    cin>>n;
    
    f(n,0,0);
    return 0;
}
