
#include <assert.h>

	
int sum_digits ( int);

int main()
{

	
	assert(sum_digits (2155)==13);
	assert(sum_digits (0)==0);
	assert(sum_digits (-106)==-7);
	
  return 0;
}
int sum_digits ( int a){

	if (a==0)
	{
		return 0;
	}
	return a%10+sum_digits(a/10);
	
} 