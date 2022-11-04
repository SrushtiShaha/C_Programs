#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
      int No1 = 0, No2 = 0, Temp = 0;
      
      printf("\n Before Swapping\n");
      
      printf("\n Enter Two Numbers -> ");
      scanf("%d%d",&No1,&No2);
      
      Temp = No1;
      No1 = No2;
      No2 = Temp;
      
      printf("\n After Swapping -> \n\n First Number Is %d And Second Number Is %d \n",No1,No2);
      
      getch();
      return 0;
}