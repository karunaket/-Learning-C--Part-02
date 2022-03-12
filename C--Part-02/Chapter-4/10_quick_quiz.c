#include <stdio.h>
#include <conio.h>
void main()
{
  int i, n;

  printf("Enter the value upto which you want to print : \n");
  scanf("%d", &n);

  printf("Printing all natural numbers from 1 to %d : \n", n);

  for (int i = 1; i <= n; i++)
  {
    printf("%d \n", i);
  }

  getch();
}