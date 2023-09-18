#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, m, i, j, tmp;
  int* basket;

  scanf("%d %d", &n, &m);

  basket = (int*)malloc(sizeof(int) * (n+1));

  for(int x = 1; x <= n; x++) {
    basket[x] = x;
  }

  for(int x = 0; x < m; x++) {
    scanf("%d %d", &i, &j);

    tmp = basket[i];
    basket[i] = basket[j];
    basket[j] = tmp;
  }

  for(int x = 1; x <= n; x++) {
    printf("%d ", basket[x]);
  }

  return 0;
}