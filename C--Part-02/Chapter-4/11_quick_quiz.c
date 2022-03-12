#include <stdio.h>
#include <conio.h>
void main()
{
  int i, n;

  printf("Enter the value from which you want to print: \n");
  scanf("%d", &n);

  printf("Your natural numbers in reverse order from %d to 1 is: \n", n);

  for (i = n; i; i--)
  {
    printf("%d \n", i);
  }

  getch();
}