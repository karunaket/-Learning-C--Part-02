#include <stdio.h>
#include <conio.h>
void main()
{
  int age = 22;
  int *ptr = &age;

  // Printing Value..

  printf("%d \n", age);

  printf("%d \n", *ptr);

  printf("%d \n", *(&age));

  getch();
}