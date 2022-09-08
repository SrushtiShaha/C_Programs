#include <stdio.h>
#include <conio.h>

int main()
{
        int i = 0, j= 0, N = 0;
        char ch = '\0';
        
        printf("\t Enter Any Size To Print Pattern -> ");
        scanf("%d",&N);
        
        printf("\n \t Pattern Is -> \n");
        
        printf("\n \t====================================================\n\n");
      
        for( i = 1, ch = 65; i <= N; i++ )
        {
              for( j = 1; j <= N; j++ )
              {
                    if( i >= j )
                    {
                          printf("%c",ch);                          
                    }
                    else
                    {
                          printf("   ");
                    }                              
              }
              
              printf("\n");
        }
        
        printf("\n \t====================================================\n\n");
        
        getch();
        return 0;
}