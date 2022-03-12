#include <stdio.h>
#include <conio.h>
void printpattern();
void main()
{
  int n;
  printf("Enter the number: \n");
  scanf("%d", &n);
  printpattern(n);

  getch();
}
// for n=3
// *
// ***
// *****
// 1-->1*
// 2-->3*
// 3-->5*
// (2n-1)

void printpattern(int n)
{
  if (n == 1)
  {
    printf("* \n");
    return;
  }
  printpattern(n - 1);
  for (int i = 0; i < (2 * n - 1); i++)
  {
    printf("*");
  }
  printf("\n");
}