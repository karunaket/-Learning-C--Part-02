# include<stdio.h>
# include<conio.h>
/*
Here sum is a function which takes a and b as input and returns an integer as 
an output.
*/   
int sum(int a,int b);   // function prototype decleration
void main(){
  int c;
  c=sum(2,5);           // function call
  printf("The value of c is %d. \n",c);
  getch();
}

int sum(int a,int b){
  int result;
  result=a+b;
  return result;
}