#include <stdio.h>
#include <stdlib.h>

void reverse(int* arr, int i, int j) {
  while(i < j) {
    int tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;

    i++;
    j--;
  }
}

int main() {
  int n, m, i, j;
  scanf(" %d %d", &n, &m);

  int* arr = (int*)malloc(sizeof(int) * (n+1));

  for(int x = 1; x <= n; x++) {
    arr[x] = x;
  }

  for(int x = 0; x < m; x++) {
    scanf(" %d %d", &i, &j);
    reverse(arr, i, j);
  }

  for(int x = 1; x <= n; x++) {
    printf("%d ", arr[x]);
  }

  free(arr);

  return 0;
}