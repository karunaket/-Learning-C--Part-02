#include <stdio.h>
#include <conio.h>
float force(float mass);
void main()
{
  float m;
  printf("Enter the mass in kgs: \n");
  scanf("%f", &m);
  printf("The force of the body in Newton = %.2f", force(m));

  getch();
}
float force(float mass)
{
  float F;
  float g = 9.8;
  F = mass * g;
  return F;
}