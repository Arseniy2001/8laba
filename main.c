#include <stdio.h>
int fib (int a)
{
    return (a == 0) ? 0 : (a == 1) ? 1 : fib(a - 1)+fib(a - 2);
}

int main ()
{
  int result,n;
  while (scanf("%d", &n) != EOF){
result=fib(n);
printf("%d\n", result);
  }
  return 0;
}


