#include <stdio.h>
#include <conio.h>

int main()
{
            int N1 = 0, N2 = 0;
            
            printf("\n Enter Any Number => ");
            scanf("%d%d",&N1,&N2);
            
            ( N1 == N2 ) ? printf("\n\n Both Numbers %d And %d Are Equal.",N1,N2) : ( N1 < N2 ) ? printf("\n\n First Number %d Is Minimun.",N1) : printf("\n\n Second Number %d Is Minimun.",N2); 
           
            getch();
            return 0;
}
