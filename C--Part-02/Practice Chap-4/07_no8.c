# include<stdio.h>
# include<conio.h>
void main(){
  // factorial(4) = 1 * 2 * 3 * 4
  // factorial(5) = 1 * 2 * 3 * 4 * 5

  int i,n,fact=1;

  printf("Enter the number: \n");
  scanf("%d",&n);

  for(i=1 ; i<=n ; i++){
    fact=fact*i;
  }
  printf("Factorial of %d = %d",n,fact);
  
  getch();
}