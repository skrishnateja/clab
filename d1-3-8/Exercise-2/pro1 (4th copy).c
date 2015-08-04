#include <stdio.h>
#include <assert.h>

	
int main(void)
{
    int x;

  printf("Enter an this year in decimal number system\n");

  scanf("%d", &x);

  assert((x%4)==0);

  return 0;
}