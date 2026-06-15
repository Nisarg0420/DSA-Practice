//String is palindorme or not


#include<iostream>
using namespace std;


/*int Palindorme(string s,int n)
{
    for(int i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-i-1])
        {
            return 0;
            break;
        }
    }
    return 1;
}*/

bool f(int i,string s,int n)
{
    if(i>=n/2)
    {
        return true;
    }

    if(s[i]!=s[n-i-1])
    {
        return false;
    }

    return f(i+1,s,n);
}

int main()
{

    
    string str="MAM";
    int n=str.length();

    bool result=f(0,str,n);

       
    if(result==1)
    {
        cout<<"THE STRING IS PALINDROME!";
    }
    else
    {
        cout<<"The String is not a palindrome!";
    }
    
    /*int result=Palindorme(str,n);
    
    if(result==1)
    {
        cout<<"THE STRING IS PALINDROME!";
    }
    else
    {
        cout<<"The String is not a palindrome!";
    }*/
}