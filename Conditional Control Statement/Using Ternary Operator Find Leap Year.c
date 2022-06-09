#include <stdio.h>
#include <conio.h>

int main()
{
            int Year = 0;
            
            printf("\n Enter Any Year => ");
            scanf("%d",&Year);
            
            if( Year % 4 == 0 )
            {
                      printf("\n\n The Given Year %d Is A Leap Year.",Year);
            }
            else
            {
                      printf("\n\n The Given Year %d Is Not A Leap Year.",Year);
            }
          
            getch();
            return 0;
}