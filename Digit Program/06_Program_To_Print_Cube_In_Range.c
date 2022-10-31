#include <stdio.h>
#include <conio.h>

void CubeRange( int iSPoint, int iEPoint )
{
          int i = 0;
          
          printf("\n ==================\n");
          
          for( i = 1; i <= iEPoint; iSPoint++, i++ )
          {
                       printf("\t %2d = %2d \n", i, iSPoint * i * i);
          }
          
          printf("==================\n");
          
          return;
}

int main()
{            
          int iStart = 0, iEnd = 0;
          
          UP:
            
            printf("\n Enter Start Range => ");
            scanf("%d",&iStart);
            
            printf("\n Enter End Range => ");
            scanf("%d",&iEnd);
           
            if( iStart > iEnd || iStart <= 0 || iEnd <= 0 )
            {
                        printf("\n Invalid Range.\n");
                        
                        goto UP;
            }
            
          CubeRange( iStart, iEnd );
          
          getch();
          return 0;
}
