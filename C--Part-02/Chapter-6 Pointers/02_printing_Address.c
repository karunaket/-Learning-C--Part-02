#include <stdio.h>
#include <conio.h>
void main()
{
  int age = 22;
  int *ptr = &age;

  // Printing Address..

  // printf("%p \n",&age);  // Prints Hexadecimal Address.

  printf("%u \n", &age);

  printf("%u \n", ptr); // Prints the value of ptr.

  printf("%u \n", &ptr);

  getch();
}