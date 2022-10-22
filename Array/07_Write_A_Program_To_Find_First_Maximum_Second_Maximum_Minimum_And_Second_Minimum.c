#include <stdio.h>
#include <conio.h>

int main()
{
        int Arr[5] = {};
        int i = 0, Max1 = 0, Max2 = 0, Min1 = 0, Min2 = 0;
        
        printf("\n*******************************************************************\n");
        
        printf("\n Enter Any Five Array Elements To Find Maximum, Second Maximum, Minimum And Second Minimum Element \n");
        
        printf("\n *******************************************************************\n");
        
        for( i = 0; i < 5; i++ ) // Accepting 
        {
                  printf("\n Enter %d Element => ", i+1);
                  scanf("%d",&Arr[i]);
        }
        
        getch();
        
        printf("\n*******************************************************************\n");
        
        for( i = 0; i < 5; i++ ) // First Maximum
        {
                  if( Arr[i] > Max1 )
                  {
                          Max1 = Arr[i];
                  }
        }
        
        for( i = 0; i < 5; i++ ) // Second Maximum
        {
                  if( Arr[i] > Max2 && Arr[i] != Max1 )
                  {
                          Max2 = Arr[i];
                  }
        }
             
        Min1 = Arr[0];
        
        for( i = 0; i < 5; i++ ) // Minimum
        {
                  if( Arr[i] < Min1 )
                  {
                          Min1 = Arr[i];
                  }
        }
        
        Min2 = Arr[4];
        
        for( i = 4; i > 0; i-- ) // Second Minimum
        {
                  if( Arr[i] < Min2 && Arr[i] != Min1 )
                  {
                          Min2 = Arr[i];
                  }
        }
        
        printf("\n*******************************************************************\n");
        
        printf("\n Maximum Element In Array Is        => %d \n",Max1);
        printf("\n Second Maximum Element In Array Is => %d \n",Max2);
        printf("\n Minimum Element In Array Is        => %d \n",Min1);
        printf("\n Second Minimum Element In Array Is => %d \n",Min2);
        getch();
        return 0;
}
