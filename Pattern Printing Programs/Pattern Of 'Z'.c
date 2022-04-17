#include <stdio.h>
#include <conio.h>

int main()
{
      int R = 0, C = 0, N = 0;
      
      printf("\n Enter Number Of Rows And Columns -> ");
      scanf("%d",&N);
      
      printf("\n\n\t Pattern Is -> \n");
      
      for(R =1; R <= N; R++)
      {
            for(C = 1; C <= N; C++)
            {
                  if(R == 1 || R + C == (N + 1) || R == N)
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