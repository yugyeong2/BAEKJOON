#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);

  double* subject = (double*)malloc(sizeof(double) * n);

  for(int i = 0; i < n; i++) {
    scanf(" %lf", &subject[i]);
  }

  double max = subject[0];
  for(int i = 1; i < n; i++) {
    if(max < subject[i]) {
      max = subject[i];
    }
  }

  for(int i = 0; i < n; i++) {
    subject[i] = subject[i] / (double)max * 100.0;
  }

  double avg  = 0.0;
  for(int i = 0; i < n; i++) {
    avg += subject[i];
  }
  avg /= n;

  printf("%lf", avg);

  return 0;
}