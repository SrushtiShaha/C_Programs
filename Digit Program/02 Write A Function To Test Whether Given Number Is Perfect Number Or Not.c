/// A Number Is Called As Perfect Number If The Sum Of It’s Factors
/// (Excluding Itself) Including Is Equal To The Same Number.
/// Write A Function To Test Whether Given Number Is Perfect Number Or Not? 
/// Return 1 If Given Number Is Perfect, Else Return 0.

/// 1) Input :- 6
///    Output:- 1
/// Calculation/Analysis 1+2+3==6
/// 2) Input :- 35
///    Output:- 0
/// Calculation/Analysis 1+5+7!=35
/// 3) Input :- 28
///    Output:- 1
/// Calculation/Analysis 1+2+4+7+14==28

#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

#define TRUE 1;
#define FALSE 0;

int Perfect_Number( int );

int main()
{
    int iNum = 0, iAns = 0;
    
    printf("\n Enter A Number => ");
    scanf("%d",&iNum);
    
    iAns = Perfect_Number( iNum );
    
    ///printf("\n %d \n",Perfect_Number( iNum ) );
    
    printf("\n %d \n",iAns);
    getch();
    return 0;
}

int Perfect_Number( int iNo )
{
    int i = 1, iTemp = 0, iRes = 0;
    
     iTemp = iNo;
     
    while( i < iNo )
    {
        if( iTemp % i == 0 )
        {
            iRes = iRes + i;
        }
        
        i++;
    }
    
    if( iNo == iRes )
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
