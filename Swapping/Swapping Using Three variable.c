#include <stdio.h>
#include <conio.h>

int main()
{
      int No1 = 0, No2 = 0, Temp = 0;
      
      printf("Before Swapping\n");
      
      printf("\n Enter Two Numbers -> ");
      scanf("%d%d",&No1,&No2);
      
      Temp = No1;
      No1 = No2;
      No2 = Temp;
      
      printf("\n After Swapping -> First Number Is %d And Second Number Is %d",No1,No2);
      
      getch();
      return 0;
}