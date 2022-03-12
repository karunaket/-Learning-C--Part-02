# include<stdio.h>
# include<conio.h>
void Apple();
void main(){
    Apple();
    Apple();      // While calling a function don't use void or int.
    Apple();
    Apple();
  
  getch();
}
void Apple(){
  printf("Apple is red in colour. \n");
}