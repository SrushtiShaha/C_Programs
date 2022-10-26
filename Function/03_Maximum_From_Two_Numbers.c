// Accept Something Return Something

#include <stdio.h>
#include <conio.h>

int Max( int, int );

int main()
{
      int No1 = 0, No2 = 0;
      
      printf("\n Enter Any Two No. => ");
      scanf("%d%d",&No1,&No2);
      
      printf("\n Maximum Number Is => %d",Max(No1,No2));
      
      getch();
      return 0;
}
int Max( int N1, int N2 )
{
      if( N1 > N2 )
      {
            return N1;
      }
      else
      {
            return N2;
      }
}
