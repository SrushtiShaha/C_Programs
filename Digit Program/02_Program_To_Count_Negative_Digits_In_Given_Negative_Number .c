#include <stdio.h>
#include <conio.h>

int main()

{
        int No = 0, NCnt = 0; 
        
        Up:
            printf("\n Enter Any Negative Number => ");
            scanf("%d",&No);
            
            if(No >= 0)
            {
                    printf("\n\n Enter Negative Integral Value \n\n");
                    goto Up;
            }
            
            while(No < 0)
            {
                    No = No / 10;
                    NCnt++;
            }
            
            printf("\n Digit In Given Number Are => %d",NCnt);
            
            getch();
            return 0;
}
