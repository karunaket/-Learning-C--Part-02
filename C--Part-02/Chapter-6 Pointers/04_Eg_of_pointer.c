#include <stdio.h>
#include <conio.h>
void doWork(int a, int b, int *sum, int *prod, int *avg);
void main()
{
  int a = 3, b = 5;
  int sum, prod, avg;

  doWork(a, b, &sum, &prod, &avg);

  printf("sum = %d, product = %d, average = %d \n", sum, prod, avg);

  getch();
}

void doWork(int a, int b, int *sum, int *prod, int *avg)
{
  *sum = a + b;
  *prod = a * b;
  *avg = (a + b) / 2;
}