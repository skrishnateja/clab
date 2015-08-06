#include <assert.h>

 int decimal (unsigned int b){
    
    int t;
    if (b==0)
    {
      return 0;
    }

    return b%10+decimal(b/10)*2;
}
int main()
{
	
   assert(decimal(1)==1);
  assert(decimal(101)==5);
  assert(decimal(0)==0);

  return 0;
}

