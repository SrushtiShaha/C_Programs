#include <stdio.h>
#include <conio.h>

int main()
{
          int No1 = 0, No2 = 0, Sum = 0, Sub = 0, Mul = 0, Div= 0, Mod = 0;
          
          printf("\n Enter Any Two Numbers => ");
          scanf("%d%d",&No1,&No2);
          
          Sum = No1 + No2;
          Sub = No1 - No2;
          Mul = No1 * No2;
          Div = No1 / No2;
          Mod = No1 % No2;
          
          printf("\n\n Addition Of Given Numbers Is       => %d",Sum);
          printf("\n\n Substraction Of Given Numbers Is   => %d",Sub);
          printf("\n\n Multiplication Of Given Numbers Is => %d",Mul);
          printf("\n\n Division Of Given Numbers Is       => %d",Div);
          printf("\n\n Reminder Of Given Numbers Is       => %d",Mod);
          
          getch();       
          return 0;
}