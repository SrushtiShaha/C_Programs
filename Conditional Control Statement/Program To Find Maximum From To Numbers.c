#include <stdio.h>
#include <conio.h>

int main()
{
             int N1 = 0, N2 = 0;
           
             printf("\n Enter Any Two Numbers => ");
             scanf("%d%d",&N1,&N2);
             
             if( N1 > N2 )
             {
                       printf("\n\n First Number %d Is Greater. ",N1);
             }
             else
             {
                       printf("\n\n Second Number %d Is Greater. ",N2);
             }
            
             getch();
             return 0;
}