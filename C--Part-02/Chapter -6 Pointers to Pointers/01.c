#include <stdio.h>
#include <conio.h>
void main()
{
  // float price = 100.00;
  // float *ptr = &price;
  // float **pptr = &ptr;

  int i = 5;
  int *ptr = &i;
  int **pptr = &ptr;

  printf("%d \n", **pptr);

  getch();
}