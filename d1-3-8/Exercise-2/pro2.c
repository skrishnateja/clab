

#include <assert.h>

float jtok (float J, float S){

  float k;
  if (S>0&&J>0)
  {
  	k = J / (1000 * S);
  	return k;
  }
	
	
  return 0;
}	
int main()
{
	   
	 assert(jtok(0,0)==0);
	 assert(jtok(250,0)==0);
	 assert(jtok(90,3)==0.03f);
	 assert(jtok(250,-20)==0);
	 assert(jtok(-5450,050)==0);

  return 0;
}


 