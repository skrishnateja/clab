<<<<<<< HEAD

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


    
=======
#include <stdio.h>
#include <assert.h>

	
int main(void)
{
    float k,J,S;
	printf("Enter Joules\n");
	scanf("%f",&J);
	printf("Enter sec\n");
	scanf("%f", &S);
	k = J / (1000 * S);
	printf("%f kW\n", k);

  return 0;
}
>>>>>>> 3c82772ac69fbc95af26c4e1bb18ccff38911928
