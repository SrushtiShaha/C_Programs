// AdditionOf Two Numbers - Accept Nothing Return Something.

#include <stdio.h>
#include <conio.h>

int Add();

int main()
{
      int Sum = 0;
      
      Sum = Add();
      
      printf("\n Addition Of Given Two Numbers Is => %d",Sum);
      
      getch();
      return 0;
}

int Add()
{
      int N1 = 0, N2 = 0, dSum = 0;
      
      printf("\n Enter Any Two Numbers -> ");
      scanf("%d%d",&N1,&N2);
      
      dSum = N1 + N2;
      
      return dSum;
}