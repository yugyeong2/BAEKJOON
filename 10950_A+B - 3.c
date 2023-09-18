#include <stdio.h>
#include <stdlib.h>

int main() {
  int t;
  scanf("%d", &t);

  int** arr = (int**)malloc(sizeof(int*) * t);
  for(int i=0; i < t; i++) {
    arr[i] = (int*)malloc(sizeof(int) * 2);
  }

  for(int i = 0; i < t; i++) {
    scanf(" %d %d", &arr[i][0], &arr[i][1]);
  }

  for(int i = 0; i < t; i++) {
    printf("%d\n", arr[i][0] + arr[i][1]);
  }

  for(int i = 0; i < t; i++) {
    free(arr[i]);
  }
  free(arr);

  return 0;
}