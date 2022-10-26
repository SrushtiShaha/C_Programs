#include <stdio.h>
#include <conio.h>

int Power( int, int );

int main()
{
          int No1 = 0, No2 = 0;
          
          printf("\n Enter Two Numbers To Find Number One Raise Two Number Two => ");
          scanf("%d%d",&No1,&No2);
         
          if( No2 < 0)
          {
                   printf("\n\n\t Invalid Input......");
                   return -1;
          }
          
          ///Power();
            
          printf("\n\n Power Of (%d)^%d = %d.",No1,No2,Power(No1,No2));
          
          getch();
          return 0;
}

int Power( int N1, int N2 )
{
          int i = 0, Pow = 0;
          
          for( i = 0, Pow = 1; i < N2; i++ )
          {
                   printf("\n Iteration No = %1d => \t\tPower = %9d * %1d.",i+1, Pow, i+1);   
                   
                   Pow = Pow * N1;               
          }
          
          return Pow;
}
