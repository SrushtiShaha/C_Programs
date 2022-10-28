#include <stdio.h>
#include <conio.h>

int main()
{
             int N1 = 0, N2 = 0;
           
             printf("\n Enter Any Two Numbers => ");
             scanf("%d%d",&N1,&N2);
             
             ( N1 > N2 ) ? printf("\n\n The First Number %d Is Greater.",N1) : ( N2 > N1) ? printf("\n\n The Second Number %d Is Greater.",N2) : printf("\n\n Both Numbers %d And %d Are Equal.",N1,N2);
            
             getch();
             return 0;
}
