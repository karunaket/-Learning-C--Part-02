#include <stdio.h>
#include <conio.h>
void display(); // function prototype
void main()
{

  int a;
  printf("Initializing display function \n");
  display(); //  function call
  printf("Display function finished it's work \n");

  getch();
}

// function definition
void display()
{
  printf("This is display \n");
}