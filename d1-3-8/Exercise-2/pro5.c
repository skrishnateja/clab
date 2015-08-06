
#include <assert.h>

int velocity (int d, int v, int t){
	return (d<=v*t/2);
}
int main(void)
{
    
    assert(velocity(30,80,3));
    assert(!velocity(121,80,3));

  return 0;
}