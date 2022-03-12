# include<stdio.h>
# include<conio.h>
void main(){
  int i=1,n=10,sum=0;


  do{
    sum=sum+i;
    i++;
  }while(i<=n);
  
  printf("Sum of first 10 natural numbers = %d",sum);
  
  getch();
}