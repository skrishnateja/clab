#include <assert.h>

	
float sum (unsigned int count){
	float total=0;
	int i,j;
	for ( i = 1; i <= count; ++i)
	{
		float factorial =1;
		for ( j = 1; j <= i; ++j)
		{
			factorial = factorial*j;
		}
		total = total + (1/factorial);
	}
	return total;
}
int main()
{
    assert(sum(0)==0);
    assert(sum(1)==1);
    assert((sum(2))==1.5);
    assert(sum(3)>1.6);
    assert(sum(500)<2);
  

  return 0;
}