// Use Only One String And Reverse It.

#include <stdio.h>
#include <conio.h>

int main()
{
          char Name[10] = {'\0'};
          int i = 0, j = 0, Temp = 0, Len = 0;
          
          printf("Enter A String => ");
          gets(Name);
          
          while( Name[i] != '\0')
          {
                    i++;
          }
          
          i--;
          Len = i / 2;
        
          while( i > Len )
          {
                    Temp = Name[i];
                    Name[i] = Name[j];
                    Name[j] = Temp;
                                                        
                    i--;
                    j++;
          }
          
          printf("\n\n The Reverse Of Given String Is => %s",Name);
          
          getch();
          return 0;
}
