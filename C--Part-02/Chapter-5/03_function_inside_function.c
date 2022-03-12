# include<stdio.h>
# include<conio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();

void main(){
  
    GoodMorning();                // Direct calling
  
  getch();
}

void GoodMorning(){
  printf("Good Morning \n");
  GoodAfternoon();                // Indirect calling
}
void GoodAfternoon(){
  printf("Good Afternoon \n");
  GoodNight();                    // Indirect calling
}
void GoodNight(){
  printf("Good Night \n");
}
