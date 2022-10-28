#include <stdio.h>
#include <conio.h>

int main()
{
            int N = 0;
 
            printf("\n Enter Any Two Numbers => ");
            scanf("%d",&N);
            
            ( N == 0 ) ? printf("\n The Given Number %d Is Neutral.",N) : ( N % 2 == 0 ) ? printf("\n The Given Number %d Is Even.",N) : printf("\n The Given Number %d Is Odd.",N);                
            
            getch();
            return 0;
}
