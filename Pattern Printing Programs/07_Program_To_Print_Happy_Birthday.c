///HAPPY BIRTHDAY PATTERN.

#include<stdio.h>
#include<conio.h>

int main()
{
    int N = 0, i = 0, j = 0;

    Up:
        printf("\n Enter Any Odd Size To Print HAPPY BIRTHDAY => ");
        scanf("%d",&N);

        if( N % 2 == 0 )
        {
            printf("\n Please Enter Any Odd Size. \n");
            printf("\n\n\t--------------------------------------------\n\n");

            goto Up;
        }

        printf("\n\t Patten Is => \n");

        printf("\n\n\t =============================================== \n\n");

        for( i = 1; i <= N; i++ )           ///H
        {
                for( j = 1; j <= N; j++ )
                {
                        if( j == 1 || j == N || i == (N+1)/2 )
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

        printf("\n\n\n\n");

        for( i = 1; i <= N; i++ )           ///A
        {
                for( j = 1; j <= N; j++ )
                {
                        if( i == 1 || j == 1 || j == N || i == (N + 1)/2 )
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

        printf("\n\n\n\n");

        for( i = 1; i <= N; i++ )           ///P
        {
                for( j = 1; j <= N; j++ )
                {
                        if( i == 1 || j == 1 || j == N && i <= (N+1)/2 || i == (N+1)/2 )
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

        printf("\n\n\n\n");

        for( i = 1; i <= N; i++ )           ///P
        {
                for( j = 1; j <= N; j++ )
                {
                        if( i == 1 || j == 1 || j == N && i <= (N+1)/2 || i == (N+1)/2 )
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

        printf("\n\n\n\n");

        for( i = 1; i <= N; i++ )           ///Y
        {
                for( j = 1; j <= N; j++ )
                {
                        if( i == j && i+j <= N || i+j == N+1 && i <= (N+1)/2 || j == (N+1)/2 && i+j > N )
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

        printf("\n\n\n\n");
        printf("\n\n\n\n");

        for( i = 1; i <= N; i++ )           ///B
        {
                for( j = 1; j <= N; j++ )
                {
                        if( i == 1 || j == 1 || i == (N + 1)/2 && j != N || j == N && i != (N+1)/2 || i == N )
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

        printf("\n\n\n\n");

        for( i = 1; i <= N; i++ )           ///I
        {
                for( j = 1; j <= N; j++ )
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
                printf("\n");
        }

        printf("\n\n\n\n");

        for( i = 1; i <= N; i++ )           ///R
        {
                for( j = 1; j <= N; j++ )
                {
                        if( j == 1 || i == 1 && j != N || i == (N+1)/2 && j != N || j == N && i < (N+1)/2 || i == j && j >= (N+1)/2 )
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

        printf("\n\n\n\n");

        for( i = 1; i <= N; i++ )           ///T
        {
                for( j = 1; j <= N; j++ )
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
                printf("\n");
        }

        printf("\n\n\n\n");

        for( i = 1; i <= N; i++ )           ///H
        {
                for( j = 1; j <= N; j++ )
                {
                        if( j == 1 || j == N || i == (N+1)/2 )
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

        printf("\n\n\n\n");

        for( i = 1; i <= N; i++ )           ///D
        {
                for( j = 1; j <= N; j++ )
                {
                        if( j == 1 || i == 1 && j <= (N-1) || i == N && j <= (N-1) || j == N && i != 1 && i != N )
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

        printf("\n\n\n\n");

        for( i = 1; i <= N; i++ )           ///A
        {
                for( j = 1; j <= N; j++ )
                {
                        if( i == 1 || j == 1 || j == N || i == (N + 1)/2 )
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

        printf("\n\n\n\n");

        for( i = 1; i <= N; i++ )           ///Y
        {
                for( j = 1; j <= N; j++ )
                {
                        if( i == j && i+j <= N || i+j == N+1 && i <= (N+1)/2 || j == (N+1)/2 && i+j > N )
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

        printf("\n\n\n\t ================================================= \n\n");

        getch();
        return 0;
}
