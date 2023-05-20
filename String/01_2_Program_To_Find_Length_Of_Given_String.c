#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[20] = {'\0'};
        int i = 0;

        printf("\n Enter A String -> ");
        gets( cSrc );

        for( i = 0; cSrc[i] != '\0'; i++ );

        printf("\n Length Of Give String Is -> %d \n", i);

        getch();
        return 0;
}
