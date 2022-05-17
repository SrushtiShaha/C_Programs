#include<stdio.h>
#include<conio.h>

int main()
{
    int NO = 0,Cnt = 0;
    
    printf("\n\t Enter A Number To Print Its Table = ");
    scanf("%d",&NO);
    
    for(Cnt = 1; Cnt <= 10; Cnt++)
    {
          printf("\n %d",Cnt * NO);
    }
    
    getch();
    return 0;
}
