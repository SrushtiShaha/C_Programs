#include <stdio.h>
#include <conio.h>

int Sum( int No );

int main()
{
          int Num = 0, Add = 0;
          
          printf("Enter A Number => ");
          scanf("%d",&Num);
          
          Add = Sum(Num);
          
          printf("\n Result Is => %d",Add);
          
          getch();
          return 0;
}

int Sum( int No )
{
          if( No != 0 )
          {
                    return No + Sum( No - 1 );
          }
          
          return No;
}
