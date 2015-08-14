
#include <assert.h>

	
int fib ( int, int ,int);

int main()
{

	
	assert(fib (21, 34, 55));
	assert(fib (3,5,8));

	
  return 0;
}
int fib ( int a, int b ,int c){

	if(a==1&&b==1&&c==2){
		return 1;
	}
	if(a<0 || a!=c-b){
		return 0;
	}
	return fib(b-a,a,b);
	
} 