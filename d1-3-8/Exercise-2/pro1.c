<<<<<<< HEAD

#include <assert.h>

int leap (unsigned int year){

  if (year %4 == 0 && year !=0 && year <10000)
  {
  	if (year % 100 == 0 )
  	{
  		if (year % 400 ==0)
  		{
  				return 1;
  		}
  			return 0;
  	}
  		return 1;
  }
  return 0;
}	
int main()
{
   
 assert(!leap(200));   
 assert(!leap(1000));   
 assert(!leap(0));   
 assert(leap(2000));   
 assert(leap(2520));

  return 0;
}

=======
#include <stdio.h>
#include <assert.h>

	
int main(void)
{
    int x;

  printf("Enter an this year in decimal number system\n");

  scanf("%d", &x);

  /*  x=4000 */
  
  assert((x%4)==0);

  return 0;
}
>>>>>>> 3c82772ac69fbc95af26c4e1bb18ccff38911928
