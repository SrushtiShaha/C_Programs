#include <stdio.h>
#include <conio.h>

int main()
{
          int r = 0, c = 0, N = 0;
  
          printf("Enter A Size => ");
          scanf("%d",&N);
          
          for( r = 1; r <= N; r++ )
          {
                  for( c = 1; c <= N; c++ )
                  {
                          if( r > c )
                          {
                                  printf(" # ");
                          }
                          else if( r == c )
                          {
                                  printf(" $ ");
                          }
                          else
                          {
                                  printf(" * ");
                          }
                  }
                  printf("\n");
          }
          
          getch();
          return 0;
}
