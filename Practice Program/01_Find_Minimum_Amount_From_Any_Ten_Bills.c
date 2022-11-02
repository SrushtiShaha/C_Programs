#include <stdio.h>
#include <conio.h>

int main()
{
    int i = 0, Amount = 0, Min_Bill = 0;
    
    for(i = 1; i <= 10; i++)
    {
        printf("\n Enter Bill Number %d = ",i);
        scanf("%d",&Amount);
        
        if(i == 1)
        {
            Min_Bill = Amount;
        }
        
        else if(Amount < Min_Bill)
        {
            printf("\n Min Updated \n");
            Min_Bill = Amount;
        }
    }
    printf("\n Minimum Bill Amount is = %d",Min_Bill );

    getch();
    return 0;
}
