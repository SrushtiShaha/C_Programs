#include <stdio.h>
#include <conio.h>

int main()

{
        int No = 0, Temp = 0, Dig = 0, Rev = 0; 
        
        Up:
            printf("\n Enter Any Positive Number => ");
            scanf("%d",&No);
            
            if(No <= 0)
            {
                    printf("\n\n Enter Positive Integral Value \n\n");
                    goto Up;
            }
            
            Temp = No;
            
            while( Temp > 0 )
            {
                    Dig = Temp % 10;
                    
                    Rev = (Rev * 10) + Dig;
                    
                    Temp = Temp / 10;
            }
            
            printf("\n Reverse Of Given Number Is => %d",Rev);
            
            getch();
            return 0;
}
