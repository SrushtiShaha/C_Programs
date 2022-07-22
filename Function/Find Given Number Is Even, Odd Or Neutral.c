// Accept Nothing Return Nothing.                        

#include <stdio.h>
#include <conio.h>

void Even();

int main()
{
        Even();
      
        getch();
        return 0;
}

void Even()
{
        int No = 0;
        
        printf("\n Enter Any Number => ");
        scanf("%d",&No);
        
        if( No == 0 )
        {
              printf(" \n Given Number %d Is Neutral. ", No );
        } 
        else if( No % 2 == 0 )
        {
              printf(" \n Given Number %d Is Even. ", No );
        }
        else
        {
              printf(" \n Given Number %d Is Odd. ", No );
        }       
        
}
