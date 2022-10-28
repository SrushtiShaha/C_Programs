#include <stdio.h>
#include <conio.h>

int main()
{
              int N = 0;
              
              printf("\n Enter A Number => ");
              scanf("%d",&N);
   
              ( N == 0 ) ? printf("\n The Number %d Is Neutral.",N) : ( N % 2 == 0 ) ? printf("The Number %d Is Even.",N) : printf("\n The Number %d Is Odd.",N);
              
              getch();
              return 0;
}
