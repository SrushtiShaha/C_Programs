#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

long int Factorial( int );

int main()
{
    int iNo = 0;
    
    printf("\n Enter A Number To Find Its Factorial => ");
    scanf("%d",&iNo);
    
    printf("\n Factorial Of Given Number %d Is = %ld.", iNo, Factorial( iNo ) );
   
    getch();
    return 0;
}

long int Factorial( int iNum )
{
    int iFact = 1;
    
    Next:
        if( iNum > 1 )
        {
            iFact = iFact * iNum;
            
            iNum--;
            
            goto Next;
        }
        
        return iFact;        
}
