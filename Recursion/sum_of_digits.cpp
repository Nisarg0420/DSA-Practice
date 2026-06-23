/* Print Sum of Digits of a number
using recursion

Example:
N = 1234
Output: 10  (1+2+3+4=10) */

#include<iostream>
using namespace std;

void f(int arr[],int i,int sum,int n)
{
    if(i>=n)
    {
        cout<<"The Sum is: "<<sum<<endl;
        return;
    }

    f(arr,i+1,sum+arr[i],n);

}

int main()
{
    int n;
    int a[20];

    cout<<"Enter the Number of Elements: ";
    cin>>n;

    cout<<"Enter the Number: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    f(a,0,0,n);

    return 0;
}