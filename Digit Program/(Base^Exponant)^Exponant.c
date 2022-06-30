#include<stdio.h>
#include<conio.h>

int main()
{
            int Base = 0, Exp1 = 0, Exp2 = 0, ExpMult = 0, Temp = 0, Res = 0;
  
            printf("\n===============********===============\n");
            
            printf("\n Enter Base => ");
            scanf("%d",&Base);
  
            printf("\n Enter First Exponent  => ");
            scanf("%d",&Exp1);
  
            printf("\n Enter Second Exponent => ");
            scanf("%d",&Exp2);
  
            ExpMult = Exp1 * Exp2;
 
            if( Base == 1 )
            {
                        Res = 1;
            }
            else
            {
                        for( Res = 1, Temp = ExpMult; Temp > 0; Temp-- )
                        {
                                      Res = Res * Base;
                        }
            }

            printf("\n Result of (%d^%d)^%d => %d", Base, Exp1, Exp2,Res);
 
            printf("\n\n===============********===============\n\n");
 
            getch();
            return 0;
}
