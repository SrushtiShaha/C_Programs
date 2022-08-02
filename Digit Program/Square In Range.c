#include <stdio.h>
#include <conio.h>

void SquareRange( int iSPoint, int iEPoint )
{
          int i = 0;
          
          for( i = 1; i <= iEPoint; iSPoint++, i++ )
          {
                       printf("\t %2d = %2d \n", i, iSPoint * i);
          }
          
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
            
          SquareRange( iStart, iEnd );
          
          getch();
          return 0;
}