#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int x1,x2,v1,v2,i;
  scanf("%d%d",&x1,&v1);
  scanf("%d%d",&x2,&v2);
  if(v1 > v2 && !((x2-x1)%(v1-v2)))
    printf("YES");
else
    printf("NO");
}
