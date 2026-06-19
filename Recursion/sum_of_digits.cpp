/* Print Sum of Digits of a number
using recursion

Example:
N = 1234
Output: 10  (1+2+3+4=10) */

#include<iostream>
using namespace std;

void f(int arr[],int i,int sum)
{
   
    if(i>3)
    {
        cout<<sum<<endl;
        return;
    }

    f(arr,i+1,sum+arr[i]);

}

int main()
{
    int a[4];

    cout<<"Enter the Number: ";
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }

    f(a,0,0);
    
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}