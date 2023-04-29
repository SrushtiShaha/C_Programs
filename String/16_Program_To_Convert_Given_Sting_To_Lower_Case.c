#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[20] = {'\0'};
        int i = 0;

        printf("\n Enter A String -> ");
        gets(cSrc);

        while( cSrc[i] != '\0' )
        {
                if( cSrc[i] >= 'A' && cSrc[i] <= 'Z' )
                {
                        cSrc[i] += 32;
                }

                i++;
        }

        printf("\n After Converting Given String To Lower Case -> %s \n", cSrc);

        getch();
        return 0;
}

