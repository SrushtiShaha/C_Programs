#include <stdio.h>
#include <conio.h>

int main()
{
            int N1 = 0, N2 = 0;
            
            printf("\n Enter Any Two Nummbers => ");
            scanf("%d%d",&N1,&N2);
            
            if( N1 == N2 )
            {
                      printf("\n\n Both The Numbers %d And %d Are Equal.",N1,N2);
            }
            else if( N1 < N2 )
            {
                      printf("\n\n The First Number %d Is Minimum Nummber.",N1);
            }
            else
            {
                      printf("\n\n The Second Number %d Is Minimum Nummber.",N2);
            }
             
            getch();
            return 0;
}
