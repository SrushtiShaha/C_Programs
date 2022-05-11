#include <stdio.h>
#include <conio.h>

int main()
{
        int Arr[5] = {};
        int i = 0, Min1 = 0, Min2 = 0;
        
        printf(" Enter Any Five Array Elements To Find Minimum Second Minimum Element \n");
        
        printf("\n*******************************************************************\n");
        
        for( i = 0; i < 5; i++ )
        {
                  printf("\n Enter %d Element => ", i+1);
                  scanf("%d",&Arr[i]);
        }
        
        getch();
        
        printf("\n*******************************************************************\n");
        
        Min1 = Arr[0];
        
        for( i = 0; i < 5; i++ )
        {
                  if( Arr[i] < Min1 )
                  {
                          Min1 = Arr[i];
                  }
        }
        
        Min2 = Arr[4];
        
        for( i = 4; i > 0; i-- )
        {
                  if( Arr[i] < Min2 && Arr[i] != Min1 )
                  {
                          Min2 = Arr[i];
                  }
        }
        
        printf("\n Minimum Element In Array Is => %d",Min1);
        printf("\n Second Minimum Element In Array Is => %d", Min2);
        
        getch();
        return 0;
}