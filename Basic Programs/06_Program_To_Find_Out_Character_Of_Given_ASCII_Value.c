// Enter A ASCII Value To Find It's Character.

#include <stdio.h>
#include <conio.h>

int main()
{
            char Ch = '\0';
  
            printf("\n Enter Any ASCII value => ");
            scanf("%c",&Ch);
         
            printf("\n\n The Character Of Given ASCII Value %c Is => %d",Ch,Ch);
            
            getch();
            return 0;
}
