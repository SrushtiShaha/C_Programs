// Accept Student Details And Display The Details - Without Using Macro.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Student
{
          int Roll_No;
          char Name[20];
          char City[10];
          float Per;
};

int main()
{
        int i = 0;
        struct Student Stud[3];
        
        printf("\n Accepting Srudents Details => \n");
        
        
        for( i = 0; i < 3; i++ )
        {
                  printf("\n Enter %d Student Details => ",i + 1);
                  
                  printf("\n Enter Student Roll Number => ");
                  scanf("%d",&Stud[i].Roll_No);
                  
                  printf("\n Enter Student Name => ");
                  scanf(" %[^\n]",&Stud[i].Name);
                  
                  fflush(stdin);
                  
                  printf("\n Enter Student City => ");
                  scanf(" %[^\n]",&Stud[i].City);
                  
                  printf("\n Enter Student Percentage => ");
                  scanf("%f",&Stud[i].Per);
                  
                  printf("\n*****************************************\n");
        }
        
        getch();
        
        for( i = 0; i < 3; i++ ) 
        {
                  printf("\n Entered Student Details Are => \n");
                  
                  printf("\n\t Roll Number => %d. \n\t Name => %s. \n\t City => %s. \n\t Percentage => %f.",Stud[i].Roll_No,Stud[i].Name,Stud[i].City,Stud[i].Per);
        }
      
        getch();
        return 0;
}