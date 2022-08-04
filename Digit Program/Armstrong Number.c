/// Armstrong / Narcissistic Number.

#include <stdio.h>
#include <conio.h>

int AmStNo( int iNum )
{
          int iRes = 0, iRet = 0, iAns = 0;
          
          while( iNum > 0 )            
          {                                         
                    iRes = iNum % 10;
                    
                    iRet = iRes * iRes * iRes;
                    
                    iAns = iRet + iAns;
                    
                    iNum = iNum / 10;   
          }
          
          return iAns;
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
            
          if( iNo == AmStNo( iNo ) )
          {                     
                    printf("\n %d Is Armstrong Number.\n",iNo);
          }
          else
          {                                                              
                    printf("\n %d Is Not Armstrong Number.\n",iNo);
          }
            
          getch();
          return 0;
}