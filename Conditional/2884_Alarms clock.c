#include <stdio.h>

int main() {
  int H, M;
  scanf("%d %d", &H, &M);

  if(M<45) {
    if(H<1) {
      H=23;
    }
    else {
      H--;
    }
    M=60+M-45;
  }
  else {
    M-=45;
  }

  printf("%d %d", H, M);
  
  return 0;
}