#include<iostream>
using namespace std;

/*void pattern3(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}*/

/*void pattern4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}*/

/*void pattern5(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}*/

void pattern6(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern7(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-i-1;j>=0;j--)
        {
            cout<<" ";
        }

        for(int j=0;j<(2*i+1);j++)
        {
            cout<<"*";
        }

        for(int j=n-i-1;j>=0;j--)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern8(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }

        for(int j=0;j<(2*n-(2*i+1));j++)
        {
            cout<<"*";
        }

        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }

        cout<<endl;
    }
}

void pattern9(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-i-1;j>=0;j--)
        {
            cout<<" ";
        }

        for(int j=0;j<(2*i+1);j++)
        {
            cout<<"*";
        }

        for(int j=n-i-1;j>=0;j--)
        {
            cout<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }

        for(int j=0;j<(2*n-(2*i+1));j++)
        {
            cout<<"*";
        }

        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }

        cout<<endl;
    }

}

int main()
{
    int n;

    cout<<"Enter the Number: ";
    cin>>n;

    pattern9(n);
    return 0;
}