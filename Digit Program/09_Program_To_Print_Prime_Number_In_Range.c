#include <stdio.h>
#include <conio.h>

int main()
{
            int iStart = 0, iEnd = 0, i = 0;
            
            printf("\n Enter Starting Range => ");
            scanf("%d",&iStart);
            
            printf("\n Enter Ending Range => ");
            scanf("%d",&iEnd);
            
            while( iStart <= iEnd )
            {
                        for( i = 2; i < iStart; i++ )
                        {
                                    if( iStart % i == 0 )
                                    {
                                                break;
                                    }
                                    else
                                    {
                                                continue;
                                    }
                        }
                        
                        if( iStart == i  )
                        {
                                    printf("\t %d \n",iStart);
                        }
                        
                        iStart++;
            }            
                       
            getch();
            return 0;
}
