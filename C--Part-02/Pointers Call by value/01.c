#include <stdio.h>
#include <conio.h>
void square(int n);

void main()
{
  int n;

  printf("Enter the no. = ");
  scanf("%d", &n);

  square(n);

  printf("Number = %d. \n", n);

  getch();
}

// Call by value.
void square(int n)
{
  n = n * n;

  printf("Square = %d. \n", n);
}