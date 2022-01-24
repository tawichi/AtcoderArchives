#include <stdio.h>
#include <string.h>
int main()
{
  char x[10001], temp;
  scanf("%s", x);
  int a, b, i, n;
  scanf("%d%d", &a, &b);

  n = strlen(x);
  for (i = 1; i < strlen(x); i++)
  {
    temp = x[a - 1];
    x[a - 1] = x[b - 1];
    x[b - 1] = temp;
  }

  printf("%s\n", x);

  return 0;
}