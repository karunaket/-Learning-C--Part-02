# include<stdio.h>
# include<conio.h>
int sum(int);
void main(){
  int snum=1;
  int fnum;
  printf("Enter the number upto which you want to do sum: \n");
  scanf("%d",&fnum);
  printf("The sum of 1st %d natural numbers = %d \n",fnum,sum(fnum));

  getch();
}

int sum(int n){
  if(n==0){
    return 0;
  }
  else{
    return n+sum(n-1);
  }
}