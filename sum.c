#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,r,s=0;
   printf("enter number");
   scanf("%d",&n);
 
   while(n>0)
   {

       r=n%10;
       s=s+r;
       n=n/10;

   }
   printf("sumof digit=%d",s);


   return 0;
}


