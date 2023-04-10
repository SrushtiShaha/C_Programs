#include <stdio.h>
#include <conio.h>

int main()
{
          char Name[10] = {'\0'};
          char RevName[10] = {};
          int i = 0, j = 0;
          
          printf("\n Enter Any String =>  ");
          gets(Name);
          
          while( Name[i] != '\0' )
          {
                    i++;
          }
          
          i--;
          
          while( i >= 0)
          {
                    RevName[j] = Name[i];
                                    
                    i--;
                    j++;
          }         
          
          printf("\n\n Given String Was => %s .",Name);
         
          printf ("\n\n After Copy The String Is => %s .",RevName);
         
          getch();
          return 0;
}
