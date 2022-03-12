# include<stdio.h>
# include<conio.h>
void main(){
  int i=1,n;

  printf("For how many times do you want to repeat 8: \n");
  scanf("%d",&n);

  while(i<=n){
    printf("\n 8");
    i++;
  }

  getch();
}