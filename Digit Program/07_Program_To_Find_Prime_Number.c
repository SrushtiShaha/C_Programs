#include <stdio.h>
#include<conio.h>

int main()
{
            int iNo = 0, i = 0, iCnt = 0;
            
            printf("\n Enter A Number To Cheak It Is Prime Or Not => ");
            scanf("%d",&iNo);
            
            for( i = 1; i <= iNo; i++ )
            {
                        if( iNo % i == 0 )
                        {
                                    iCnt++;
                        }
            }
            
            if( iCnt == 2 )
            {
                        printf("\n Given Number %d Is A Prime Number.",iNo);
            }
            else
            {
                        printf("\n Given Number %d Is Not A Prime Number.",iNo);
            }
            
            getch();
            return 0;
}
