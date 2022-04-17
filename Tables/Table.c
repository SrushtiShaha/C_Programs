#include<stdio.h>
#include<conio.h>

int main()
{
    int SP,EP,Cnt,NO;
   printf("\n\t Enter First Number =>  ");
   scanf("%d",&SP);
   
   printf("\n\t Enter Last Number =>  ");
   scanf("%d",&EP);
   
   for(NO = 1; NO <= 10; NO++)
   {
   
       for(Cnt = SP; Cnt <= EP; Cnt++)
       {
           printf(" %-3d",NO * Cnt);
       }
       printf("\n");
       
    }
   
   getch();
   return 0;
}