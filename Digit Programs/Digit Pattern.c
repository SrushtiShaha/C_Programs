#include <stdio.h>
#include <conio.h>

int main()
{
      int i = 0, j = 0, No = 1;
              
      printf("\n Pattern Is => \n");
              
      for( i = 1; i <= 4; i++ )
      {
              for( j = 1; j <= 4; j++ )
              {
                    printf(" %d ",No);
                            
                    No++;
                               
                    if( No > 9 ) 
                    {
                           No = 1;
                     }                    
              }
              printf("\n");
      }
            
      getch();
      return 0;
}
