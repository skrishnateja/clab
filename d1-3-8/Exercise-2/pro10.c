
#include <assert.h>

	
char change_case ( char);

int main()
{

	
	assert(change_case ('a')=='A');
	assert(change_case ('H')=='h');
	assert(change_case ('6')=='6');
	
  return 0;
}
char change_case ( char c){

	if(c>='a'&&c<='z'){
		return c-32;
	}
	if(c>='A'&&c<='Z'){
		return c+32;
	}
	return c;
	
} 