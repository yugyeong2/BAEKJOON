#include <stdio.h>
// 또한 입력과 출력 스트림은 별개이므로, 테스트케이스를 전부 입력받아서 저장한 뒤 전부 출력할 필요는 없다.
// 테스트케이스를 하나 받은 뒤 하나 출력해도 된다.

int main() {
  int t, a, b;
  scanf("%d", &t);

  for(int i = 0; i < t; i++) {
    scanf(" %d %d", &a, &b);
    printf("%d\n", a+b);
  }
  
  return 0;
}