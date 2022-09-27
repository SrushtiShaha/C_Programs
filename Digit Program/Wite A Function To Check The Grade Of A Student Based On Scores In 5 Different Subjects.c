/// Wite A Function To Check The Grade Of A Student Based On Scores In 5 Different Subjects.
/// Inputs: Scores In 5 Different Subjects ( Array Of 5 Elements ).
/// Output: “A” If Average Is Greater Than Or Equal To 80 
///         “B” If Average Is Between 60 And 79 
///         “C” If Average Is Between 40 and 59
///         “D” If Average Is Less Than 40
/// Here Are Some Test Cases With Expected Output For Given 
/// Inputs Array Of 5 Elements Output-Return value

/// Input : 64, 80, 72, 75, 68
/// Output: B
/// Input : 54 ,20 ,30, 35, 45
/// Output: D
/// Input : 84, 72, 90, 92, 80
/// Output: A
/// Input : 45, 64 ,36, 50, 48
/// Output: C

#include <stdio.h>
#include <conio.h>

int main()
{
    int Marks[5] = {}, iTot = 0;
    float fPer = 0.0;
    
    printf("\n Enter 5 Subjects Marks => \n");
    
    printf("\n 1st Subject => ");
    scanf("%d",&Marks[1]);
    
    printf("\n 2nd Subject => ");
    scanf("%d",&Marks[2]);
    
    printf("\n 3rd Subject => ");
    scanf("%d",&Marks[3]);
    
    printf("\n 4th Subject => ");
    scanf("%d",&Marks[4]);
    
    printf("\n 5th Subject => ");
    scanf("%d",&Marks[5]);
    
    iTot = Marks[1] + Marks[2] + Marks[3] + Marks[4] + Marks[5];
    
    printf("\n Total Marks => %d \n",iTot);
    
    fPer = iTot / 5;
    
    printf("\n Percentage => %0.2f% \n",fPer);
    
    if( fPer >= 80 )
    {
        printf("\n Grade => A \n");
    }
    else if( fPer >= 60 && fPer <= 79 )
    {
        printf("\n Grade => B \n");
    }
    else if( fPer >= 40 && fPer <= 59 )
    {
        printf("\n Grade => C \n");
    }
    else
    {
        printf("\n Grade => D \n");
    }
    
    getch();
    return 0;
}
