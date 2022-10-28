#include <stdio.h>
#include <conio.h>

int main()
{
          char ch = {'\0'};
          Up:                       
            printf("\n Enter Any Character => ");
            scanf("%c",&ch);
            
            if( ch >= 'A' && ch <= 'Z' )
            {
                    printf("\n Entered Character %c Is Uppercase.",ch);                   
            }
            else if( ch >= 'a' && ch <= 'z' )
            {
                    printf("\n Entered Character %c Is Lowercase.",ch);
            }
            else
            {
                    goto Up;
            }
          
            getch();
            return 0;
}
