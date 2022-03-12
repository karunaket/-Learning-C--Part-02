#include <stdio.h>
#include <conio.h>
void change(int a);
void main()
{

  int b = 344;
  printf("The value of b before change is %d \n", b);
  change(b);
  printf("The value of b after change is %d \n", b);
  getch();
}

void change(int a)
{
  a = 77;
}

// Here change function doesn't change any value.