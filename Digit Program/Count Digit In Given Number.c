#include <stdio.h>
#include <conio.h>

int main()
{
          int No = 0, Temp = 0, dCnt = 0;
          
          printf("\n Enter A Number To Count Digits In Given Number => ");
          scanf("%d",&No);
          
          Temp = No;
          
          while( Temp > 0 )
          {
                    Temp = Temp / 10;
                    dCnt++;
          }
          
          printf("\n Digits In Given %d Is => %d",No,dCnt);
          
          getch();
          return 0;
}