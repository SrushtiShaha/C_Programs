///---------------------------PATTERN IS =>---------------------------

///*******************HAPPY GURU PURNIMA RANJIT SIR*******************

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int N = 0, i = 0, j = 0;

    Up:
        printf("\n Enter Any Odd Size To Wish HAPPY GURU PURNIMA => ");
        scanf("%d",&N);

        if( N % 2 == 0 )
        {
            printf("\n\n Please Enter Any Odd Size. \n\n");

            printf("\n\t--------------------------------------------\n");

            printf("\n\n Press Any Key To Go Ahead!!! \n");

            getch();

            system("cls");

            goto Up;
        }

        //printf("\n\t Patten Is => \n");

        printf("\n =========================================================== ******************* =========================================================== \n\n");

        for( i = 1; i <= N; i++ )
        {
                for( j = 1; j <= N; j++ )           ///H
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

                printf("\t");

                for( j = 1; j <= N; j++ )           ///A
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

                printf("\t");

                for( j = 1; j <= N; j++ )           ///P
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

                printf("\t");

                for( j = 1; j <= N; j++ )           ///P
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

                printf("\t");

                for( j = 1; j <= N; j++ )           ///Y
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

        for( i = 1; i <= N; i++ )
        {
                for( j = 1; j <= N; j++ )           ///G
                {
                        if( i == 1 && j != N || j == 1 && i + j <= N || i == N && j != N || j == (N-1) && i >= (N+1)/2 || i == (N+1)/2 && j >= (N+1)/2 )
                        {
                                printf(" * ");
                        }
                        else
                        {
                                printf("   ");
                        }
                }

                printf("\t");

                for( j = 1; j <= N; j++ )           ///U
                {
                        if( j == 1 || j == N || i == N && j != 1 && j != N)
                        {
                                printf(" * ");
                        }
                        else
                        {
                                printf("   ");
                        }
                }

                printf("\t");

                for( j = 1; j <= N; j++ )           ///R
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

                printf("\t");

                for( j = 1; j <= N; j++ )           ///U
                {
                        if( j == 1 || j == N || i == N && j != 1 && j != N)
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

        for( i = 1; i <= N; i++ )
        {
               for( j = 1; j <= N; j++ )           ///P
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

                printf("\t");

                for( j = 1; j <= N; j++ )           ///U
                {
                        if( j == 1 || j == N || i == N && j != 1 && j != N)
                        {
                                printf(" * ");
                        }
                        else
                        {
                                printf("   ");
                        }
                }

                printf("\t");

                for( j = 1; j <= N; j++ )           ///R
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

                printf("\t");

                for( j = 1; j <= N; j++ )           ///N
                {
                        if( j == 1 || j == N || i == j )
                        {
                                printf(" * ");
                        }
                        else
                        {
                                printf("   ");
                        }
                }

                printf("\t");

                for( j = 1; j <= N; j++ )           ///I
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

                printf("\t");

                for( j = 1; j <= N; j++ )           ///M
                {
                        if( j == 1 || j == N || i+j == (N+1) && i <= (N+1)/2 || i == j && j <= (N+1)/2 )
                        {
                                printf(" * ");
                        }
                        else
                        {
                                printf("   ");
                        }
                }

                printf("\t");

                for( j = 1; j <= N; j++ )           ///A
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

        for( i = 1; i <= N; i++ )
        {
                for( j = 1; j <= N; j++ )           ///R
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

                printf("\t");

                for( j = 1; j <= N; j++ )           ///A
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

                printf("\t");

                for( j = 1; j <= N; j++ )           ///N
                {
                        if( j == 1 || j == N || i == j )
                        {
                                printf(" * ");
                        }
                        else
                        {
                                printf("   ");
                        }
                }

                printf("\t");

                for( j = 1; j <= N; j++ )           ///J
                {
                        if( i == 1 || j == (N+1)/2 || i == N && j <= (N+1)/2 || j == 1 && i >= (N+1)/2 )
                        {
                                printf(" * ");
                        }
                        else
                        {
                                printf("   ");
                        }
                }

                printf("\t");

                for( j = 1; j <= N; j++ )           ///I
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

                printf("\t");

                for( j = 1; j <= N; j++ )           ///T
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

        for( i = 1; i <= N; i++ )
        {
                for( j = 1; j <= N; j++ )           ///S
                {
                        if( i == 1 || i == N || j == 1 && i <= (N+1)/2 || j == N && i >= (N+1)/2 || i == (N+1)/2 )
                        {
                                printf(" * ");
                        }
                        else
                        {
                                printf("   ");
                        }
                }

                printf("\t");

                for( j = 1; j <= N; j++ )           ///I
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

                printf("\t");

                for( j = 1; j <= N; j++ )           ///R
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

        printf("\n =========================================================== ******************* =========================================================== \n\n");

        getch();
        return 0;
}
