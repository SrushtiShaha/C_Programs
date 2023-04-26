#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[20] = {'\0'};
        int i = 0, iC_Let = 0, iS_Let = 0, iDig = 0, iSym = 0;

        printf("\n Enter A String -> ");
        gets(cSrc);

        while( cSrc[i] != '\0' )
        {
                if( cSrc[i] >= 'A' && cSrc[i] <= 'Z' )
                {
                        iC_Let++;
                }
                else if( cSrc[i] >= 'a' && cSrc[i] <= 'z' )
                {
                        iS_Let++;
                }
                else if( cSrc[i] >= '0' && cSrc[i] <= '9' )
                {
                        iDig++;
                }
                else
                {
                        iSym++;
                }

                i++;
        }

        printf("\n Capital Letters In Given String Are -> %d \n", iC_Let);
        printf("\n Small Letters In Given String Are   -> %d \n", iS_Let);
        printf("\n Digits In Given String Are          -> %d \n", iDig);
        printf("\n Special Symbol In Given String Are  -> %d \n", iSym);

        getch();
        return 0;
}

