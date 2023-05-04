#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[20] = {'\0'};
        int Len = 0;

        printf("\n Enter A String -> ");
        gets( cSrc );

        printf("\n Given String Is -> \n",cSrc);

        Len = printf("\t\t %s",cSrc);

        printf("\n\n Length Of Given String <%s> Is -> %d. \n", cSrc, Len - 3);

        getch();
        return 0;
}
