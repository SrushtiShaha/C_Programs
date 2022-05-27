// Enter A Character To Find It's ASCII Value.

#include <stdio.h>
#include <conio.h>

int main()
{
            char Ch = '\0';
            
            printf("\n Enter A Character => ");
            scanf("%c",&Ch);
            
            if( Ch < 128 )
            {
                      printf("\n\n The ASCII Value Of Given Character %c Is => %d ",Ch,Ch);
            }
            
            getch();
            return 0;
}