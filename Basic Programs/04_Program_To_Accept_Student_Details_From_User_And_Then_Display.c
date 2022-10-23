// Write A Program To Accept Student Details From User.
// Display All Information After Accepting Information Using Single printf Statement.

#include <stdio.h>
#include <conio.h>p

int main()
{
        char S_Name [10];
        int R_No = 0;
        char Course [10];
        char City [10];
        
        printf("\n Enter Student Details => \n");
        
        printf("\n\n Enter Student Name -> ");
        scanf("%s",&S_Name);
        
        printf("\n Enter Student Roll Number -> ");
        scanf("%d",&R_No);
        
        printf("\n Enter Student Course -> ");
        scanf("%s",&Course);
        
        printf("\n Enter Student City -> ");
        scanf("%s",&City);
        
        getch();
        
        printf("\n Student Name -> %s \n\n Student Roll Number -> %d \n\n Student Course -> %s \n\n Student City -> %s",S_Name, R_No, Course, City);
        
        getch();
        return 0;
}
