#include <stdio.h>
#include <conio.h>
void main()
{
  int a;
  scanf("%d", &a);
  while (a < 10)
  {
    printf("%d \n", a);
    a++;
  }

  getch();
}