#include <stdio.h>
#include <conio.h>
void main()
{
  int age = 22;
  int *ptr = &age;
  int _age = *ptr;

  printf("%d",_age);

  getch();
}