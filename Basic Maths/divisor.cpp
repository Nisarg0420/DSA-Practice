/* Given an integer N, return all divisors of N.
A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words,
 if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.*/


 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;

 /* void divisors(int no)
 {
    int i;

    cout<<"The Divisors of "<<no<<" are: ";
    for(i=1;i<=no;i++)
    {
        if(no%i==0)
        {
            cout<<i<<" ";
         
        }
    }
 }*/

 void divisors(int no)
 {
    vector<int> res;

    for(int i=1;i*i<=no;i++) //In this i was getting error because i was stating with zero and divison or modulo by zero is not valid.
    {
        if(no%i==0)
        {
            res.push_back(i);
            if((no/i)!=i)
            {
                res.push_back(no/i);
            }
        }
    }

    sort(res.begin(),res.end());

    cout<<"The Divisors of "<<no<<" are: ";
    for(auto it:res)
    {
        cout<<it<<" ";
    }
 }

 int main()
 {
    int no;

    cout<<"Enter the Number: ";
    cin>>no;

    divisors(no);

    return 0;
 }
