
#include <assert.h>

	
float Convert ( float);

int main()
{

	
	assert(Convert (0)==0);
	assert(Convert (-500)==0);
	assert(Convert (1)-0.277778<0.001);
	assert(Convert (100000)!=0);

  return 0;
}
float Convert ( float mps){

	float kph;
	if(mps>0){
		(kph = (0.2777778 * mps));

    return kph;
	}
	return 0;
} 