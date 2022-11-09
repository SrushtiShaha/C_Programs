#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
          int Num[5] = { 53, 82, 42, 93, 71 };
          int *Ptr = &Num[3];
          
          printf("\n Base Address Of Array => %d ",Num);                          ///907325504
          printf("\n Value In Pointer => %d ",Ptr);                               ///907325516
          printf("\n Value In Array Element Where Pointer Pointing => %d ",*Ptr); /// 93
          
          getch();       
          
          Ptr--;         
            
          /// Ptr-- => Ptr  - ( sizeof(<datatype of Ptr>) * 1 ) 
          ///       => Ptr  - ( sizeof(int) * 1 )
          ///       => 5328 - ( 4 * 1 )
          ///       => 5328 - 4
          ///       => 5325                 
          
          printf("\n\n New Value Of Pointer Is => %d ",Ptr);                      /// 907325512
          printf("\n Value Of Array Element Where Pointer Pointing => %d ",*Ptr); /// 42
          
          getch();
          return 0;
}
