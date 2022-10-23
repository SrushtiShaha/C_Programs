#include <stdio.h>
#include <conio.h>

int main()
{
          int Cnt = 0;
          
          printf("\n ASCII Table Is => ");
          
          printf("\n\n=============================\n");
          
          while( Cnt < 128 )
          {
                    printf("\n %3d = |%c|",Cnt,Cnt);
                    
                    Cnt++;
          }
          
          printf("\n\n=============================\n");
          
          getch();
          return 0;
}
