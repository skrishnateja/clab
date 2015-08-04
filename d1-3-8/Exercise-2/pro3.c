
#include <assert.h>

	
int lumenousflux(int,int);

int main()
{

	assert(lumenousflux(1,1)==1);

	assert(lumenousflux(0,1000)==0);

	assert(lumenousflux(100000,0)==0);

  return 0;
}
int lumenousflux(int watts,int lumens_per_watt){

	int lumens;
    lumens = watts *lumens_per_watt;
    return lumens;
}