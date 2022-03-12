# include<stdio.h>
# include<conio.h>
void main(){
  int i,n=10;

  for(i=10; i>=1 ; i--){
    printf("%d * %d = %d \n",n,i,n*i);
  }
  
  getch();
}