#include <stdio.h>
#include <conio.h>

int main()
{
      int No = 0;
      
      printf("\n Enter Any Number -> ");
      scanf("%d",&No);
      
      if( No == 0 )
      {
            printf("\n The Given Number Is Nuetral");
      }
      else if( No / 2 == 0 )
      {
            printf("\n The Given Number Is Even");
      }
      else
      {
            printf("\n The Given Number Is Odd");
      }
      
      getch();
      return 0;
}
