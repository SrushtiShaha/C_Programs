#include <stdio.h>
#include <conio.h>

int main()
{
        int iNo = 21, iNum = 55;
        int *iPtr1 = &iNo;
        int *iPtr2 = &iNo;
        
        printf("\n Value Of iNo                              = %d", iNo);       // 21
        printf("\n Address Of iNo                            = %d", &iNo);     
        printf("\n Value Of iNo Using Its Pointer iPtr1      = %d", *iPtr1);   // 21
        printf("\n Address Of iNo Using iPtr1                = %d", iPtr1);    
        printf("\n Address Of iPtr1                          = %d", &iPtr1);   
        printf("\n Value Of iNum                             = %d", iNum);     // 55
        printf("\n Address Of iNum                           = %d", &iNum);    
        printf("\n Value Of Variable Using Its Pointer iPtr2 = %d", *iPtr2);   // 21
        printf("\n Address Of Variable Using iPtr2           = %d", iPtr2);    
        printf("\n Address Of iPtr2                          = %d", &iPtr2);   
        
        getch();
        return 0;
}