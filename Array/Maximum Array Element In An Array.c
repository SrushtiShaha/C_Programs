#include <stdio.h>
#include <conio.h>

int main()
{
        int Arr[5] = {};
        int i = 0, Max = 0;
        
        printf(" Enter Any Five Element To Find Maximum Element => \n");
        
        for( i = 0; i < 5; i++ )
        {
                printf(" \n Enter %d Element => ", i+1 );
                scanf("%d",&Arr[i]);
        }
        
        getch();
        
        for( i = 0; i < 5; i++ )
        {
                if( Arr[i] > Max )
                {
                        Max = Arr[i];
                }     
        }
        
        printf(" \n Maximum Array Element In Given Array Is => %d", Max);
        
        getch();
        return 0;
}
