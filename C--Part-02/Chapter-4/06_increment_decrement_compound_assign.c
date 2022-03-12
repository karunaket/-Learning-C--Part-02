#include <stdio.h>
#include <conio.h>
void main()
{
  int i = 5;
  while (i <= 20)
  {
    printf("The value of i is %d \n", i);
    i += 5; // --> increases the value of i by 5.
  //i =i+5;
  }

  getch();
}