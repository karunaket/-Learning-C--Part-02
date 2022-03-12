#include <stdio.h>
#include <conio.h>
void main()
{
  int a = 3;
  printf("%d %d %d \n", a, ++a, a++); // Here compiler is taking arguments from
                                      //  right to left  <------  like this. Because different compilers have different form of taking arguments.

  getch();
}