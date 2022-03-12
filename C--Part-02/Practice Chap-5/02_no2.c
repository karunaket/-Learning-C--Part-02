#include <stdio.h>
#include <conio.h>
float ctof(int a, int b);
void main()
{
  int a, b;
  printf("Enter the temp in Celsius: \n");
  scanf("%d", &a);
  printf("After converting the value = %f", ctof(a, b));

  getch();
}

float ctof(int a, int b)
{
  float c;
  c = (float)(a * 9 / 5) + 32;
  return c;
}