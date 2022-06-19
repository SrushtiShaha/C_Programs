#include <stdio.h>
#include <conio.h>

int main()
{
          int Num[5] = { 53, 82, 42, 93, 71 };
          int *Ptr = Num;
          
          printf("\n Base Address Of Array => %d ",Num);                          ///5328
          printf("\n Value In Pointer => %d ",Ptr);                               ///5328
          printf("\n Value In Array Element Where Pointer Pointing => %d ",*Ptr); /// 53
          
          getch();
          
          Ptr++;
          
          /// Ptr++ => Ptr  + ( sizeof(<datatype of Ptr>) * 1 ) 
          ///       => Ptr  + ( sizeof(int) * 1 )
          ///       => 5328 + ( 4 * 1 )
          ///       => 5328 + 4
          ///       => 5332
          
          printf("\n\n New Value Of Pointer Is => %d ",Ptr);                      /// 5332
          printf("\n Value Of Array Element Where Pointer Pointing => %d ",*Ptr); /// 82
          
          getch();
          return 0;
}