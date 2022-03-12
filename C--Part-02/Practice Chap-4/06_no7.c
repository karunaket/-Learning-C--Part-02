# include<stdio.h>
# include<conio.h>
void main(){
  int i,n=8,sum=0;
  
  for(i=1 ; i<=10 ; i++){
    printf("%d * %d = %d \n \n",n,i,n*i);
  }
  sum=sum+n*i;
  printf("Sum = %d \n",sum);

  getch();
}