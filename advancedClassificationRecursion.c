#include <stdio.h>
#include "NumClass.h"

//power function helper
int pow_hr(int num,int x)
{
    int numpow=1;
    for(int i=0;i<x;i++)
    {
        numpow*=num;
    }
    return numpow;
} 

int Check_Armstrong (int Number, int Times)
{
  static int Reminder, Sum = 0;
  if (Number > 0)
   {
     Reminder = Number %10;
     int s = pow_hr(Reminder,Times);
     Sum = Sum + s;
     Check_Armstrong (Number /10, Times);
     return Sum;
   }
   else
     return 0;
}

int isArmstrongRec(int num)
{
    int times=0;
    int num1=num;
    while (num1!=0)
    {
        times+=1;
        num1/=10;
    }
    if(num==Check_Armstrong(num,times))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int reverse(int num)
{
    int rem=0;
    int sum=0;
    if(num!=0){
            rem=num%10;
            sum=sum*10+rem;
            reverse(num/10);
    }
        else
            return sum;
    return sum;
} 

int isPalindromeRec(int num)
{
    if(num == reverse(num))
    {
        return 1;
    }
    return 0;
}