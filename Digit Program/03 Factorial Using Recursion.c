#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int Factorial( int );

int main()
{
    int iNo = 0, iFact = 0;
    
    printf("\n Enter A Number To Find Its Factorial => ");
    scanf("%d",&iNo);
    
    iFact = Factorial( iNo );
    
    printf("\n Factorial Of Given Number %d Is = %d.",iNo, iFact);
    
    getch();
    return 0;
}

int Factorial( int iNum )
{
    static int iRes = 1;
    
    if( iNum > 1 )
    {
        iRes = Factorial( iNum - 1 );
    }
    
    return iRes * iNum;
}