#include <stdio.h>

int main() {
  int H, M, CH=0, CM=0;
  scanf("%d %d", &H, &M);
  scanf("%d", &CM);

  CH = CM/60;
  CM = CM%60;
    
  if(M+CM >= 60) {
    if(H==23) {
      H=0;
    }
    else {
      CH++;
    }
    M=M+CM-60;
  }
  else {
    M+=CM;
  }

  if(H+CH >= 24) {
    H = H+CH-24;
  }
  else {
    H += CH;
  }

  printf("%d %d", H, M);
  
  return 0;
}