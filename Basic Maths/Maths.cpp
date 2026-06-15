//Striverr Basic Maths 

/*Q-4)ARMSTRONG NUMBER QUESTION:-Problem Statement:Given an integer N, return true it is an Armstrong number otherwise return false.
 An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number 
 of digits.*/


 #include<iostream>
 #include<math.h>
 using namespace std;

 void Armstrong(int no)
 {
    int lastDigit,count=0,sum=0;
    int originalNo,number;

    originalNo=no;
    number=no;

    while(no>0)
    {
        lastDigit=no%10;
        count++;

        no=no/10;
    }

    while(number>0)
    {
        lastDigit=number%10;
        sum=round(pow(lastDigit,count))+sum;

        number=number/10;
    }

    cout<<"the sum is: "<<sum<<endl;

    if(originalNo==sum)
    {
        cout<<"True!,it is an armstrong number";
    }
    else
    {
        cout<<"False!,it is not an armstrong number";
    }
 }

 int main()
 {
    int n;

    cout<<"Enter the Number: ";
    cin>>n;

    Armstrong(n);
    return 0;
 }






 