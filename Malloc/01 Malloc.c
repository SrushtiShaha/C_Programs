#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
        int iCnt = 0, iSum = 0;
        int *iPtr = NULL;
        
        printf("Enter How Many Costomers You Have => ");
        scanf("%d",&iCnt);  //5
        
        iPtr = (int *) malloc (iCnt * sizeof(int));
        
        if( iPtr == NULL )
        {
                printf("\n Memory Allocation Failed!!!");
                return -1;
        }
        
        for( int i = 0; i < iCnt; i++)
        {
                printf("Enter Bill %d : ",i + 501);
                scanf("%d",&iPtr[i]);
        }
        
        system("cls");
        
        printf("\n Entered Bills Are => ");
        
        for( int i = 0; i < iCnt; i++ )
        {
                iSum = iSum + iPtr[i];
                printf("\t %d",iPtr[i]);
        }
        
        printf("\n\n Sum Of Given Numbers Is => %d.",iSum);
        
        free(iPtr);
        
        getch();       
        return 0;
}