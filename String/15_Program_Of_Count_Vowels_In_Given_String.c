#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[20] = {'\0'};
        int i = 0, iCnt = 0;

        printf("\n Enter A String -> ");
        gets(cSrc);

        while( cSrc[i] != '\0' )
        {
                if( cSrc[i] == 'a' || cSrc[i] == 'A' || cSrc[i] == 'e' || cSrc[i] == 'E' || cSrc[i] == 'i' || cSrc[i] == 'I' || cSrc[i] == 'o' || cSrc[i] == 'O' || cSrc[i] == 'u' || cSrc[i] == 'U' )
                {
                        iCnt++;
                }

                i++;
        }

        printf("\n Vowels In Given String %s Is -> %d \n", cSrc, iCnt);

        getch();
        return 0;
}
