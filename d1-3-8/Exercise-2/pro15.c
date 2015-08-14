
#include <assert.h>

	
int power ( int, unsigned int );

int main()
{

	
	assert(power (1, 34)==1);
	assert(power (2,5)==32);
	assert(power (25,0)==1);
	assert(power (26,1)==26);
	assert(power (0,58)==0);
	assert(power (-10,2)==100);

	
  return 0;
}
int power ( int a, unsigned int b ){

	if (b==1)
	{
		return a;
	}
	if (b==0)
		{
			return 1;
		}
	if (a==0)
	{
		return 0;
	}

	return a*power(a,b-1);
	
} 