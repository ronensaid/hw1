#include <stdio.h>
#include "NumClass.h"

//power function helper
int pow_h(int num,int x)
{
    int numpow=1;
    for(int i=0;i<x;i++)
    {
        numpow*=num;
    }
    return numpow;
} 

int isArmstrong(int number)
{
    int lastdigit=0;
    int power=0;
    int sum=0;
    int times=0;
    int n = number;
    int n1=number;

    while (n1!=0)
    {
        times+=1;
        n1/=10;

    }

    while(n!=0)
    {

        lastdigit = n%10;
        power= pow_h(lastdigit,times);
        sum+=power;

        n/=10;

    } 
    if (sum==number) 
        return 1;
    else
        return 0;
}
int isPalindrome(int num)
{
    int n = num;
 
    int rev = 0;
 
    while (n)
    {
        int r = n % 10;
 
        
        rev = rev * 10 + r;
 
        
        n = n / 10;
    }
 
    return (num == rev);
}