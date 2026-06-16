// Reverse a given Array
// Problem Statement: You are given an array. The task is to reverse the array and print it.

#include<iostream>
using namespace std;

/* void reverseArray(int arr1[])
{
    int n=4;
    int arr2[5];

    for(int i=0;i<n;i++)
    {
        arr2[i]=arr1[n-i-1];
    }

     for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<endl;
    }
}*/

//Recursion using the two pointer methods
/*void f(int a[],int l,int r)
{
    if(l>=r)
    {
        return;
    }
    
    int temp=a[l];
    a[l]=a[r];
    a[r]=temp;
    
    f(a,l+1,r-1);
    
}*/

void f(int arr[],int i,int n)
{
    if(i>=n/2)
    {
        return;
    }

    int temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;

    f(arr,i+1,n);
}

int main()
{
    //int arr[5];

    int arr[5]={5,4,3,2,1};
    //reverseArray(arr);
    
    f(arr,0,5);

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}