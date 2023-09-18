#include <stdio.h>

int main() {
  int before[10], after[10], different=0;
  
  for(int i = 0; i < 10; i++) {
    scanf("%d", &before[i]);
    after[i] = before[i] % 42;
  }

  for(int i = 0; i < 10; i++) {
    int count = 0;
    for(int j = 0; i!=j && j<10; j++) {

      if(after[i] == after[j]) {
        count++;
      }
    }
    if(count == 0) {
      different++;
    }
  }

  printf("%d", different);

  return 0;
}