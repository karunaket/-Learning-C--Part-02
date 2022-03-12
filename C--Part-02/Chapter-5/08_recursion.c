#include <stdio.h>
#include <conio.h>
int factorial(int x);
void main()
{
  int a = 4;
  printf("The factorial of %d = %d. \n", a, factorial(a));

  getch();
}

int factorial(int x)
{
  printf("Calling factorial(%d) \n", x);
  if (x == 1 || x == 0)
  {
    return 1;
  }
  else
  {
    return (x * factorial(x - 1));
  }
}