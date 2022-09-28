/// Write A Program To Find The Absolute Difference Between 
/// The Original Number And It’s Reversed Number.
/// Input - Original Number
/// Output- Absolute Difference Between Original And Reversed Number.
/// Here Are Some Test Cases With Expected Output For Given Inputs.

/// Input :– 542
/// Output:– 297
/// Analysis 542 - 245 = 297
/// Input :- 923
/// Output:- 594
/// Analysis 923 - 329 = 594
/// Input :- 1234
/// Output:- 3087
/// Analysis 4321 - 1234 = 3087
/// Input :- 561
/// OutputL- 396
/// Analysis 561 - 165 = 396
/// Input :- 75
/// Output:- 18
/// Analysis 75 - 57 = 18

#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
    int iNo = 0, iTemp = 0, iRev = 0, iAns = 0; /// iDig = 0
    
    printf("\n Enter A Number => ");
    scanf("%d",&iNo);
    
    iTemp = iNo;
    
    while( iTemp > 0 )
    {        
        iRev = ( iRev * 10 ) + ( iTemp % 10 );
        /// iDig = iTemp % 10;           
        /// iRev = ( iRev * 10 ) + iDig;
        iTemp = iTemp / 10;
    }
    
    /// iAns = iNo - iRev;
    
    if( iNo > iRev )
    {
        iAns = iNo - iRev;
    }
    else
    {
        iAns = iRev - iNo;
    }
    
    printf("\n Answer Is => %d \n",iAns);
    
    printf("\n Analysis :- %d - %d = %d \n",iNo,iRev,+iAns);
    
    getch();
    return 0;
}