#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, m; //바구니의 수, 공을 넣는 횟수
  int i, j, k; //i번 바구니부터 j번 바구니까지 k번 공을 넣는다

  scanf("%d %d", &n, &m);

  int* basket = (int*)malloc(sizeof(int) * (n+1));

  //바구니 초기화
  for(int x = 1; x<=n; x++) {
    basket[x] = 0;
  }

  for(int x = 0; x<m; x++) { //m번 공을 넣는다
    scanf(" %d %d %d", &i, &j, &k);

    for(int y = i; y<=j; y++) {
      basket[y] = k;
    }
  }

  for(int x = 1; x<=n; x++) {
    printf("%d ", basket[x]);
  }

  return 0;

}