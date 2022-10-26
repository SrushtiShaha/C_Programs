#include <stdio.h>
#include <conio.h>

void Accept_Array( int Num[], int );
void Display_Arrray( int Arr[], int );
int Find_Max( int No[], int );

int main()
{
            int Max = 0, Value[3] = {0};
            
            Accept_Array( Value, 3 );
            
            printf("\n Back To Main() \n\n PRESS ANY KEY TO MOVE AHEAD.");
            
            Display_Arrray( Value, 3 );
            
            Max = Find_Max( Value, 3 );
            
            printf("\n Maximum Array Element In Array Is => %d",Max);
           
            getch();
            return 0;
}

void Accept_Array( int Num[], int Size )
{
            int i = 0;
            
            printf("\n Inside Accept Element => \n");
            
            for( i = 0; i < Size; i++ )
            {
                        printf("\n Enter Element No %d => ",i+1);
                        scanf("%d",&Num[i]);
            }
            
            return;
}

void Display_Arrray( int Arr[], int Size )
{
            int i = 0;
            
            printf("\n\n Element In Array Inside Display Function => \n");
            
            for( i = 0; i < Size; i++ )
            {
                        printf("\n\n Value Of %d Element = %d",i+101,Arr[i]);                        
            }
            
            return;
}

int Find_Max( int No[], int Size )
{
            int i = 0, Res = 0;
            
            printf("\n\n\n Inside Max Function => \n");
            
            while( i < Size )
            {
                        if( i == 0 || ( Res < No[i] ) )
                        {
                                    Res = No[i];
                        }
                        
                        i++;
            }
            
            return Res;
}
