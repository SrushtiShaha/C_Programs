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

int main()
{
        int i = 0, Cnt = 0, Dig = 0;
        long long int Temp = 0;
        struct Reserve R[Reservation];

        /// Accepting Customers Details.

        printf("\n Accepting Details For Reservation Of The Customers : \n ",Reservation);

        for( i = 0; i < Reservation; i++ )
        {
                R[i].Id = i+101;

                printf("\n----------------------------------------------------------------\n");

                printf("\n Enter Details Of %d Id Customer -> \n",i+101);

                fflush(stdin);

                printf("\n Enter Name -> ");
                gets(R[i].Name);                                                ///scanf("%s",R[i].Name);

                fflush(stdin);

                Up:
                    printf("\n Mobile Number -> ");
                    scanf("%ld",&R[i].M_No);

                    Temp = R[i].M_No;

                    Cnt = 0;

                    while( Temp > 0 )
                    {
                            Dig = Temp % 10;
                            Cnt = Cnt++;
                            Temp = Temp / 10;
                            printf("\n Cnt = %d",Cnt);
                    }

                    /*if( Cnt == 10 )
                    {
                            break;      //goto DOWN;
                    }
                    */
                    if( Cnt != 10 )
                    {
                            printf("\n\n You Have Entered Invalid Mobile Number.\n\n Please Enter Valid (10 Digit) Mobile Number.\n\n");
                            goto Up;
                    }

                //DOWN:

                printf("\n Enter Number Of Members For Reservation -> ");
                scanf("%d",&R[i].Cnt);

                R[i].Price = 500;

                R[i].Bill = ( R[i].Price * R[i].Cnt );
        }

        /// Display Customers Details.

        system("cls");

        printf("\n\n Customers Details Are : \n");

        for( i = 0; i < Reservation; i++ )
        {
                printf("\n****************************************************************\n");

                printf("\n Customers Id %d Details => ",R[i].Id);

                printf("\n\n Customer's Name Is => %s",R[i].Name);

                printf("\n\n Customer's Mobile Number Is => %d",R[i].M_No);

                printf("\n\n Number Of Persons Reservation Is => %d",R[i].Cnt);

                printf("\n\n Price Of One Person Reservation Is => %d",R[i].Price);

                printf("\n\n Total Bill Of Is => %d",R[i].Bill);
        }

        printf("\n\n================================================================\n");

        getch();
        return 0;
}
