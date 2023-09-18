#include <stdio.h>
#define N 28
int main() {
  int Attendance[31] = {0};
  int tmp;
  for(int i = 0; i < N; i++) {
    scanf("%d", &tmp);
    
    for(int j = 1; j <= 30; j++) {
      if(tmp == j) {
        Attendance[j] = 1;
      }
    }
  }

  for(int i = 1; i <= 30; i++) {
    if(Attendance[i] == 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}