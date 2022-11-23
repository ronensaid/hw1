#include <stdio.h>
#include "NumClass.h"

 
    int isPrime(int n)
    {
    	
    	for(int i=2;i<=n/2;i++)
    	{
    		if(n%i==0)
            {
    		    return 0;
            }
    	}
    	return 1;
    }
    //factorial of the digit
    int factorial(int r) 
    {
   int fact = 1;
   while(r>1) {
      fact = fact * r;
      r--;
    }
   return fact;
    }
int isStrong(int n)
 {
   int temp, rem, result = 0;
   temp = n;
   while(temp) {
      rem = temp % 10;
      result = result + factorial(rem);
      temp = temp/10;
   }
   if (result == n)
      return 1;
   else
      return 0;
}