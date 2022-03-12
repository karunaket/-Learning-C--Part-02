#include <stdio.h>
#include <conio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
void main()
{
  int x = 3, y = 5;
  swap(x, y);
  printf("x = %d & y = %d \n", x, y);

  _swap(&x,&y);
  printf("x = %d & y = %d \n", x, y);

  getch();
}

// Call by Value
void swap(int a, int b)
{

  int t = a; // value of a goes in t.
  a = b;     // value of b goes in a.
  b = t;     // value of t goes in b.

  printf("a = %d & b = %d \n", a, b);
}

// Call by Reference
void _swap(int *a, int *b)
{
  int t = *a; // value of a goes in t.
  *a = *b;     // value of b goes in a.
  *b = t;     // value of t goes in b.

  printf("a = %d & b = %d \n", *a, *b);

}