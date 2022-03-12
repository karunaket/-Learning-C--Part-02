#include <stdio.h>
#include <conio.h>
int fibo(int);
void main()
{
  int n, result;
  printf("Enter the Nth Number: ");
  scanf("%d", &n);
  printf("The %dth number in Fibonacci series = %d \n", n, fibo(n));
  getch();
}

int fibo(int num)
{
  if (num == 0)
  {
    return 0;
  }
  else if (num == 1)
  {
    return 0;
  }
  else if (num == 2)
  {
    return 1;
  }
  else
  {
    return fibo(num - 1) + fibo(num - 2); // Here fibo means --> fibo(num-1)
                                          // garda jun value aauxa tes lai fib le tyo particular place ko nth fibonacci no. nikalxa. Matlab it user le no. 4 diyo vane -->fibo(4-1) -->fibo(3) aauxa ra aba yesle 3th fibonacci no. pahila find garxa gun ki ho 1 tes pachi feri fibo(4-2) garda fibo(2) aauxa ra fibo(2)=1 ho ra aba yes le 1+1 garxa ani 2 aauxa.
  }
}