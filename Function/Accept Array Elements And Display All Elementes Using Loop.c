#include <stdio.h>
#include <conio.h>

Accept_Array( int Num[], int Size )
{
          int i = 0;
          
          printf("\n Inside Accept Element => \n");
          
          for( i = 0; i < Size; i++ )
          {
                    printf("\n Enter Element No %d = ",i+1);
                    scanf("%d",&Num[i]);
          }
          
          return;
}

Display_Array( int Arr[], int Size )
{
          int i = 0;
          
          printf("\n\n Element In Array Inside Display Function => \n");
          
          for( i = 0; i < Size; i++ )
          {
                    printf("\n\n Value Of %d Element = %d",i+101,Arr[i]);
          }
          
          return;
}

int main()
{
          int Value[3] = {0};
          
          Accept_Array( Value, 3 );
          
          printf("\n Back To Main() \n\n Press Any Key To Move Ahead.");
          
          getch();
          
          Display_Array( Value, 3 );
          
          getch();
          return 0;
}
