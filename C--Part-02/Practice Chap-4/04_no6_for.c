# include<stdio.h>
# include<conio.h>
void main(){
  int i=1,n=10,sum=0;

  for(i ; i<=n ; i++){
    sum=sum+i;
  }
  
  printf("Sum of first 10 natural numbers = %d",sum);
  
  getch();
}