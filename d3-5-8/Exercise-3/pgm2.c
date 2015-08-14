#include <stdio.h>

/* C Program to reverse a number */

long reverse(long); 
 
int main()
{
   long n, r;
 
   scanf("%ld", &n);
 
   r = reverse(n);
 
   printf("%ld\n", r);
 
   return 0;
}
 
long reverse(long n) {
   static long r = 0;
 
   if (n == 0) 
      return 0;
 
    r = r*10 + n%10;
    if (r==0)
    {
       printf("%ld", r);
    }
    reverse(n/10);
    
    return r;
} 
