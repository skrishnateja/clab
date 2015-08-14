
#include <assert.h>

int velocity (int d, int v, int t){
	// return 0 or 1 if distance is less than/ greater then distance covered by car
	return (d<=v*t/2);    
}
int main(void)
{
    
    assert(velocity(30,80,3));   //accident happens
    assert(!velocity(121,80,3));   //accident not happens

  return 0;
}