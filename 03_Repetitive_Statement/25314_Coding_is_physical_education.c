#include <stdio.h>
#include <string.h>

int main()
{
  int n, num, byte=0;
  scanf("%d", &n);

  num = n/4;

  if(num != 0) {
    for(int i = 0; i < num-1; i++) {
      printf("long ");
    }
    printf("long int");
  }

  return 0;
}