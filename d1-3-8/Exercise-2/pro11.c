#include <assert.h>

 int binary (unsigned int d){
    if (d==1)
    {
      return 1;
    }
    return (d%2) + binary(d/2)*10;
}
int main()
{
   assert(binary(1)==1);
  assert(binary(5)==101);
  assert(binary(0)==0);

  return 0;
}

