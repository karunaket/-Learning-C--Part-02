# include<stdio.h>
# include<conio.h>
void main(){
  // prime number --> The number which is divisible by 1 and itself. Eg:-2,3,etc.

  int n,i,count=0;

  printf("Enter the number: \n");
  scanf("%d",&n);

  for(i=1 ; i<=n ; i++){
    
    {
      if(n%i==0){
        count++;
      }
    }
  }
  if(count==2){
    printf("Prime number.");
  }
    else{
      printf("Not prime number.");
    }
  
  
  getch();
}