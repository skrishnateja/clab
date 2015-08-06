

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
