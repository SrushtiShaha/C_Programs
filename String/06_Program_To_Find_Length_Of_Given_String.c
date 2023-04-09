#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[20] = {'\0'};
        int i = 0, Len = 0;

        printf("\n Enter A String -> ");
        gets(cSrc);

        while( cSrc[i] != '\0' )
        {
                Len++;
                i++;
        }

        printf("\n The Length Of Given String <%s> Is -> %d.\n", cSrc, Len);

        getch();
        return 0;
}
