#include <stdio.h>
#include <conio.h>

void PerfectNo( int iNum )
{
          int i = 0, iAns = 0;
          
          for( i = 1; i < iNum; i++ )            
          {                                         
                    if( iNum % i == 0 )
                    {                                                             
                              iAns = i + iAns;
                    }
          }
  
          if( iNum == iAns )
          {                     
                    printf("\n %d Is Perfect Number.",iNum);
          }
          else
          {                                                              
                    printf("\n %d Is Not Perfect Number.",iNum);
          }
          
          return;
}

int main()
{
          int iNo = 0;
  
          UP:
    
            printf("\n Enter A Number => ");
            scanf("%d",&iNo);
  
            if( iNo <= 0 )
            {
                      printf("\n Invalid Input.\n");                 
                      
                      goto UP;
            }
            
            PerfectNo( iNo );
            
            getch();
            return 0;
}
