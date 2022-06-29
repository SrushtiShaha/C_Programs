#include<stdio.h>
#include<conio.h>

int main()
{
            int Bas = 0, Exp = 0, Temp = 0, Res = 0;
            
            printf("\n===============********===============\n\n");
  
            printf("\n Enter Base => ");
            scanf("%d",&Bas);
  
            printf("\n Enter Exponent = ");
            scanf("%d",&Exp);
  
            if( Bas == 1 )
            {
                     Res = 1;
            }
            else
            {
                     for( Res = 1, Temp = Exp; Temp > 0; Temp-- )
                     {            
                                Res = Res * Bas;
                     }
            }
              
            printf("\n Result of %d^%d => %d", Bas, Exp, Res);
 
            printf("\n\n===============********===============\n\n");
 
            getch();
            return 0;
}
