#include <stdio.h>
#include <conio.h>

int main()
{
          int iNo = 0, i = 0;
  
          UP:
    
            printf("Number = ");
            scanf("%d",&iNo);
  
            if(iNo <= 0)
            {
                       goto UP;
            }
  
            for(i = 2; i < iNo; i++)
            { 
                       if(iNo % 2 == 0)
                       {
                                  break;
                        }
            }
  
            if( iNo == i )
            {
                        printf("Prime");
            }
            else
            {
                        printf("Not Prime");
            }
            
            getch();
            return 0;
}