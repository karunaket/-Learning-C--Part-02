#include <stdio.h>
#include <conio.h>
void square(int n);
void _square(int *n);

void main()
{
  int number;

  printf("Enter the no. = ");
  scanf("%d", &number);

  square(number);

  printf("Number = %d. \n", number);

  _square(&number);

  printf("Number = %d. \n", number);

  getch();
}

// Call by value.
void square(int n)
{
  n = n * n;

  printf("Square = %d. \n", n);
}

void _square(int *n)
{
  *n = (*n) * (*n); // 4 * 4

  printf("Square = %d. \n", *n);
}