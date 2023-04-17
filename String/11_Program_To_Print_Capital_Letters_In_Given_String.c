#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[20] = {'\0'};
        int i = 0;

        printf("\n Enter A String -> ");
        gets( cSrc );

        printf("\n Capital Letters Are -> ");

        while( cSrc[i] != '\0' )
        {
                if( cSrc[i] >= 'A' && cSrc[i] <= 'Z' )
                {
                        printf(" %c \t", cSrc[i]);
                }

                i++;
        }

        getch();
        return 0;
}
