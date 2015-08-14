#include <assert.h>

 int palindrom ( int p){
    int t=0;
    while(p>0){
      t=t*10+p%10;
    }
    if (t==p)
    {
      
    return 1; 
    }
    return 0;

}
int main()
{
	
   assert(palindrom(1));
  assert(palindrom(101));
  assert(!palindrom(200));

  return 0;
}

