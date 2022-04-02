#include <stdio.h>
#include <conio.h>

int main()
{
  int i = 0,j = 0,x = 0;
  
  printf("Enter Size Number=> ");
  scanf("%d",&x);
  
  for(i = 1;i <= x;i++)
  {
      for(j = 1;j <= x;j++)
      {
        if(j == 1||i == 1||i == x||j == x)
        {
            printf(" * ");
        }
        else
        {
            printf("   ");
        }
      }
      printf("\n");
   }
  
  getch();
  return 0;
}