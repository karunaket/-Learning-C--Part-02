#include <stdio.h>
#include <conio.h>
void printAddress(int n);
void main()
{
  int n = 4;

  printAddress(n);

  printf("Address of n = %u. \n", &n);

  getch();
}

void printAddress(int n)
{
  printf("Address of n = %u. \n", &n);
}