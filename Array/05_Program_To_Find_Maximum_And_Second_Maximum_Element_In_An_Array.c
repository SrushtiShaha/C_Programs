#include <stdio.h>
#include <conio.h>

int main()
{
        int Arr[5] = {};
        int i = 0, Max1 = 0, Max2 = 0;
        
        printf(" Enter Any Five Array Elements To Find Second Maximum Element \n");
        
        printf("\n*******************************************************************\n");
        
        for( i = 0; i < 5; i++ )
        {
                  printf("\n Enter %d Element => ", i+1);
                  scanf("%d",&Arr[i]);
        }
        
        getch();
        
        printf("\n*******************************************************************\n");
        
        for( i = 0; i < 5; i++ )
        {
                  if( Arr[i] > Max1 )
                  {
                          Max1 = Arr[i];
                  }
        }
        
        for( i = 0; i < 5; i++ )
        {
                  if( Arr[i] > Max2 && Arr[i] != Max1 )
                  {
                          Max2 = Arr[i];
                  }
        }
        
        printf("\n Maximum Element In Array Is => %d",Max1);
        printf("\n Second Maximum Element In Array Is => %d", Max2);
        
        getch();
        return 0;
}
