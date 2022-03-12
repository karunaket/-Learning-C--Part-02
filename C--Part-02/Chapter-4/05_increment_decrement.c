#include <stdio.h>
#include <conio.h>
void main()
{
  int i = 5;
  printf("The value after i++ is %d \n", i++); // --> i++ means 1st print then do
                                               //     increment.
  printf("The value of i is %d", i);           // --> ++i means 1st do increment
                                               //     then print.

  getch();
}