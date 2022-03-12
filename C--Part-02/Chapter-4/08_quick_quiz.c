#include <stdio.h>
#include <conio.h>
void main()
{
  int i, n;
  printf("Enter the value of n \n");
  scanf("%d", &n);

  printf("Printing natural numbers from 1 to %d: \n", n);
  i = 1;

  do
  {
    printf("%d \n", i);
    i++;
  } while (i <= n);

  getch();
}