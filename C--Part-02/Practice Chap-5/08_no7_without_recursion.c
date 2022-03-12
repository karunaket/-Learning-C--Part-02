#include <stdio.h>
#include <conio.h>
int main()
{
  for (int i = 1; i < 8; i = i + 2)
  {
    for (int j = 0; j < i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  getch();
}