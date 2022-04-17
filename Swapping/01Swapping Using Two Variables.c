#include <stdio.h>
#include <conio.h>

int main()
{
      int No1 = 0, No2 = 0, Temp = 0;
      
      printf("\n Enter Two Numbers -> ");
      scanf("%d%d",&No1,&No2);
      
      printf("\n Before Swapping\n\n No1 is %d And No2 is %d",No1,No2);
      
      No1 = No1 + No2;
      No2 = No1 - No2;
      No1 = No1 - No2;
      
      printf("\n\n After Swapping -> \n\n First Number Is %d And Second Number Is %d",No1,No2);
      
      getch();
      return 0;
}