#include<stdio.h>
#include<conio.h>
int main()
{
  int year;
  printf("\n\nEnter Any Year");
  scanf("%d",&year);
  
  if(year%4==0)
   {
       printf("\nThe Year is Leap Year");
   }
   
   else
   {
       printf("\nThe Year is Not Leap Year");
   }
   getch();
   clrscr();
}