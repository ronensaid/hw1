#include <stdio.h>
#include "NumClass.h"
#include "basicClassification.c"
#include "advancedClassificationLoop.c"
#include "advancedClassificationRecursion.c"
int main()
{
    printf("please enter the first number: ");
    int a;
    scanf("%d",&a);
    
    printf("please enter the second number: ");
    int b;
    scanf("%d",&b);
    printf("the Armstrong numbers are:");
    for(int i=a; i<b;i++)
    {
         if(isArmstrong(i)==1)
         {
            printf("%d ",i);
         }
        
    }
 
     printf("the palindrome numbers are:");
    for(int i=a; i<b;i++)
    {
         if(isPalindrome(i)==1)
         {
            printf("%d ",i);
         }
        
    }
     printf("the prime numbers are:");
    for(int i=a; i<b;i++)
    {
         if(isPrime(i)==1)
         {
            printf("%d ",i);
         }
        
    }
     printf("the strong numbers are:");
    for(int i=a; i<b;i++)
    {
         if(isStrong(i)==1)
         {
            printf("%d ",i);
         }
        
    }
    return 0;
}
 