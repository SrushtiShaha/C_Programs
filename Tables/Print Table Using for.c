#include <stdio.h>
#include <conio.h>

int main()
{
    int S_No = 0, E_No = 0, R = 0, C = 0;
    
    printf("\n Enter Starting No => ");
    scanf("%d",&S_No);
    
    printf("\n Enter Ending No => ");
    scanf("%d",&E_No);
    
    printf("\n\n Tables In Range %d To %d => ",S_No,E_No);
    printf("\n=================*******=================\n");
    
    if(S_No < E_No)
    {
        for(R = 1; R <= 10; R++)
        {
            for(C = S_No; C <= E_No; C++)
            {
                printf("%3d",R * C);
            }
            printf("\n");
        } 
    }
    else
    {
        for(R = 1; R <= 10; R++)
        {
            for(C = S_No; C >= E_No; C--)
            {
                 printf("%-4d",R * C);
            }
            printf("\n");
        }
    }
    
    printf("\n=================*******=================");
    
    getch();
    return 0;
}