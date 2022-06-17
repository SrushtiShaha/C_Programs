#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define Stud_Count 7  /// Macro.

struct Student
{
        int Roll_No;
        char Name[12];
        char City[8];
        float Per;
};

int main()
{
        int i = 0;
        
        struct Student Stud[Stud_Count];
        
        printf("\n Accepting Srudents Details => \n");
        
        for( i = 0; i < Stud_Count; i++ )    ///Accepting Details.
        {
                printf("\n*******************************************\n");
                
                printf("\n Enter %d Student Details => \n",i + 1);
                
                printf("\n Enter Student Roll Number : ");
                scanf("%d",&Stud[i].Roll_No);
                
                printf("\n Student Name : ");
                scanf("%s",&Stud[i].Name);
                
                fflush(stdin);
                
                printf("\n Enter City : ");
                scanf("%s",&Stud[i].City);
                
                fflush(stdin);
                
                printf("\n Enter Percentage : ");
                scanf("%f",&Stud[i].Per);
        }
        
        getch();
        
        for( i = 0; i < Stud_Count; i++ )
        {
                printf("\n*******************************************\n");
 
                printf("\n %d Student Details Are => ",i+1);
                
                printf("\n Student Roll Number : %d.", Stud[i].Roll_No);
                
                printf("\n Student Name : %s.", Stud[i].Name);
                
                printf("\n Student City : %s.", Stud[i].City);
                
                printf("\n Student Percentage : %f.\n", Stud[i].Per);
        }
        
        getch();
        return 0;
}