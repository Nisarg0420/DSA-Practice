/* Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and 
itself and the total number of divisors is 2..*/


#include<iostream>
using namespace std;

/*void primeNo(int no)
{
    int i,isPrime=0;

    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            isPrime=0;
            break;
            
        }
        else
        {
            isPrime=1;
        }
    }

    if(isPrime==1)
    {
        cout<<"It is a Prime Number!";
    }
    else
    {
        cout<<"It is not a Prime Number!";
    }
}*/

void prime(int no)
{
    int count=0;

    for(int i=1;i*i<no;i++)
    {
        if(no%i==0)
        {
            count++;

            if(no/i!=i)
            {
                count++;
            }
        }
    }

    if(count==2)
    {
        cout<<"It is a Prime Number!";
    }
    else
    {
        cout<<"It is not a Prime Number!";
    }
}

int main()
{
    int n;

    cout<<"Enter the Number: ";
    cin>>n;

    prime(n);
    return 0;
}