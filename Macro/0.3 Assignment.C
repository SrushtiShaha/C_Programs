#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Reservation 1

struct Reserve
{
        int Id;
        char Name[40];
        long long int M_No;
        int Cnt;
        int Price;
        int Bill;
};

void Function1();
void Function2();

struct Reserve R[Reservation];

int main()
{
        Function1();

        getch();
        return 0;
}

void Function1()
{
        int i = 0, Cnt = 0, Dig = 0;
        long long int Temp = 0;

        /// Accepting Customers Details.

        printf("\n Accepting Details For Reservation Of The Customers : \n ",Reservation);

        printf("\n----------------------------------------------------------------\n");

        for( i = 0; i < Reservation; i++ )
        {
                R[i].Id = i+101;

                printf("\n Enter Details Of %d Id Customer -> \n",i+101);

                fflush(stdin);

                printf("\n Enter Name -> ");
                gets(R[i].Name);                                                ///scanf("%s",R[i].Name);

                fflush(stdin);

                Up:
                    printf("\n Mobile Number -> ");
                    scanf("%lld",&R[i].M_No);

                    Temp = R[i].M_No;

                    Cnt = 0;

                    while( Temp > 0 )
                    {
                            Dig = Temp % 10;
                            Cnt++;
                            Temp = Temp / 10;
                    }

                    if( Cnt == 10 )
                    {
                            goto DOWN;
                    }
                    else
                    {
                            printf("\n\n You Have Entered Invalid Mobile Number.....\n\n Please Enter Valid (10 Digit) Mobile Number.....\n\n");
                            goto Up;
                    }

                DOWN:

                printf("\n Enter Number Of Members For Reservation -> ");
                scanf("%d",&R[i].Cnt);

                printf("\n\n----------------------------------------------------------------\n\n");
        }

        printf("\n\n\t Thank You For This Information......");

        getch();

        system("cls");

        Function2();
}

void Function2()
{
        int j = 0;

        R[j].Price = 500;

        R[j].Bill = ( R[j].Price * R[j].Cnt );

        /// Display Customers Details.

        printf("\n\n Customers Details Are : \n");

        printf("\n***************************************************************\n");

        for( j = 0; j < Reservation; j++ )
        {
                printf("\n Customers Id %d Details => ",R[j].Id);

                printf("\n\n Customer's Name Is => %s",R[j].Name);

                printf("\n\n Customer's Mobile Number Is => %lld",R[j].M_No);

                printf("\n\n Number Of Persons Reservation Is => %d",R[j].Cnt);

                printf("\n\n Price Of One Person Reservation Is => %d",R[j].Price);

                printf("\n\n Total Bill Of Is => %d",R[j].Bill);

                printf("\n\n\n***************************************************************\n");
        }

        printf("\n\n--------------*************Thank You*************--------------\n\n");

        printf("\n===============================================================\n");
}
