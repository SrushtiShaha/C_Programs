#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[20] = {'\0'};
        int i = 0, iCnt = 0;

        printf("\n Enter A String -> ");
        gets( cSrc );

        while( cSrc[i] != '\0' )
        {
                if( ! ( ( cSrc[i] >= 'A' && cSrc[i] <= 'Z' ) || ( cSrc[i] >= 'a' && cSrc[i] <= 'z' ) || ( cSrc[i] >= '0' && cSrc[i] <= '9' ) ) )
                {
                        iCnt++;
                }

                i++;
        }

        printf("\n Operators In Given String %s Is -> %d \n", cSrc, iCnt);

        getch();
        return 0;
}
