#include <stdio.h>
#include <conio.h>

int main()
{
        int i = 0,j = 0, N = 0;
        
        printf("\t Enter Any Size To Print Pattern Of Forkinfosystem -> ");
        scanf("%d",&N);
        
        printf("\n \t Pattern Is -> ");
        
        printf("\n \t====================================================\n\n");
        
        for( i = 1; i <= N; i++) //F
        {
              for( j = 1; j <= N; j++)
              {
                    if( i == 1 || j == 1 || i == (N+1)/2)
                    {
                          printf(" * ");
                    }
                    else
                    {
                          printf("   ");
                    } 
              }
              
              printf("\n");
        }
        
        printf(" \n\n ");
        
        for( i = 1; i <= N; i++) //O
        {
              for( j = 1; j <= N; j++)
              {
                    if( ( i == 1 && j != 1 && j != N) || ( j == 1 && i != 1 && i != N) || ( i == N && j != 1 && j != N) || (j == N && i != 1 && i != N))
                    {
                          printf(" * ");
                    }
                    else
                    {
                          printf("   ");
                    }
              }
              
              printf(" \n ");
       }
       
       printf(" \n\n ");
        
        for( i = 1; i <= N; i++) //R
        {
              for( j = 1; j <= N; j++)
              {
                    if(i == 1 || j == 1 || i == (N+1)/2 || j == N && i <= (N+1)/2 || i == N && j >= (N+1)/2 || j == (N+1)/2 && i >= (N+1)/2)
                    {
                          printf(" * ");
                    }
                    else
                    {
                          printf("   ");
                    }   
              }
              
              printf(" \n ");
        }
        
        printf(" \n\n ");
        
        for( i = 1; i <= N; i++) //K
        {
              for( j = 1; j <= N; j++)
              {
                    if( j == (N+1)/2 || i+j ==(N+1) && i <= (N+1)/2 || i == j && (i >= (N+1)/2))
                    {
                          printf(" * ");
                    }
                    else
                    {
                          printf("   ");
                    }
              }
              
              printf(" \n ");
        }
        
        printf(" \n\n ");
        
        for( i = 1; i <= N; i++) //I
        {
              for( j = 1; j <= N; j++)
              {
                    if( i == 1 || i == N || j == (N+1)/2 )
                    {
                          printf(" * ");
                    }
                    else
                    {
                          printf("   ");
                    }                                    
              }
              
              printf(" \n ");
        }
        
        printf(" \n\n ");
        
        for( i = 1; i <= N; i++) //N
        {
              for( j = 1; j <= N; j++)
              {
                    if(j == 1 || j == N || i == j)
                    {
                          printf(" * ");
                    }
                    else
                    {
                          printf("   ");
                    }                                   
              }
              
              printf(" \n ");
        }
        
        printf(" \n\n ");
        
        for( i = 1; i <= N; i++) //F
        {
              for( j = 1; j <= N; j++)
              {
                    if( i == 1 || j == 1 || i == (N+1)/2 )
                    {
                          printf(" * ");
                    }
                    else
                    {
                          printf("   ");
                    }                                 
              }
              
              printf(" \n ");
        }
        
        printf(" \n\n ");
        
        for( i = 1; i <= N; i++) //O
        {
              for( j = 1; j <= N; j++)
              {
                    if( ( i == 1 && j != 1 && j != N) || ( j == 1 && i != 1 && i != N) || ( i == N && j != 1 && j != N) || (j == N && i != 1 && i != N))
                    {
                          printf(" * ");
                    }
                    else
                    {
                          printf("   ");
                    }                                  
              }
              
              printf(" \n ");
        }
        
        printf(" \n\n ");
        
        for( i = 1; i <= N; i++) //S
        {
              for( j = 1; j <= N; j++)
              {
                    if(i == 1 || j == 1 && i <= (N+1)/2 || i == (N+1)/2 || (j == N && i >= (N+1)/2) || i == N)
                    {
                          printf(" * ");
                    }
                    else
                    {
                          printf("   ");
                    }                                     
              }
              
              printf(" \n ");
        }
        
        printf(" \n\n ");
        
        for( i = 1; i <= N; i++) //Y
        {
              for( j = 1; j <= N; j++)
              {
                    if( i == j && i <= (N+1)/2 || i+j == (N+1) && i <= (N+1)/2 || j == (N+1)/2 && i >= (N+1)/2 )
                    {
                          printf(" * ");
                    }
                    else
                    {
                          printf("   ");
                    }                                     
              }
              
              printf(" \n ");
        }
        
        printf(" \n\n ");
        
        for( i = 1; i <= N; i++) //S
        {
              for( j = 1; j <= N; j++)
              {
                    if(i == 1 || j == 1 && i <= (N+1)/2 || i == (N+1)/2 || (j == N && i >= (N+1)/2) || i == N)
                    {
                          printf(" * ");
                    }
                    else
                    {
                          printf("   ");
                    }                                     
              }
              
              printf(" \n ");
        }
        
        printf(" \n\n ");
        
        for( i = 1; i <= N; i++) //T
        {
              for( j = 1; j <= N; j++)
              {
                    if( i == 1 || j == (N+1)/2 )
                    {
                          printf(" * ");
                    }
                    else
                    {
                          printf("   ");
                    }                                   
              }
              
              printf(" \n ");
        }
        
        printf(" \n\n ");
        
        for( i = 1; i <= N; i++) //E
        {
              for( j = 1; j <= N; j++)
              {
                    if( i == 1 || j == 1 || i == N || i == (N+1)/2 && j <= (N+1)/2 )
                    {
                          printf(" * ");
                    }
                    else
                    {
                          printf("   ");
                    }
              }
              
              printf(" \n ");
        }
        
        printf(" \n\n ");
        
        for( i = 1; i <= N; i++) //M
        {
              for( j = 1; j <= N; j++)
              {
                    if( j == 1 || j == N || i == j && i <= (N+1)/2 || i+j == (N+1) && i <= (N+1)/2)
                    {
                          printf(" * ");
                    }
                    else
                    {
                          printf("   ");
                    }                
              }
              
              printf(" \n ");
        }
        
        getch();
        return 0;     
}