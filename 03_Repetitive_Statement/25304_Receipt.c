#include <stdio.h>
#include <stdlib.h>

int main()
{
  int money, n;
  scanf("%d", &money);
  scanf("%d", &n);
  
  int **arr = (int **)malloc(sizeof(int*) * n);
  for (int i = 0; i < n; i++)
  {
    arr[i] = (int *)malloc(sizeof(int) * 2);
  }

  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    scanf(" %d %d", &arr[i][0], &arr[i][1]);
    sum += arr[i][0] * arr[i][1];
  }

  if (money == sum)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }

  for(int i=0; i<n; i++) {
    free(arr[i]);
  }
  free(arr);

  return 0;
}