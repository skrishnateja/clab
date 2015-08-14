#include <assert.h>



int aircraft (float v, float a, float d){
	return ((v*v)>=2*a*d);
}
int main(void)
{
    
    assert(aircraft(320,2.85,1400));   // aircraft dashed/safe
    assert(!aircraft(121,8,3000));     // aircraft not dashed/safe

  return 0;
}
  
