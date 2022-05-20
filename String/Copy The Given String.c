#include <stdio.h>
#include <conio.h>

int main()
{
          char Name[20] = {'\0'};
          char Copy_Name[20] = {'\0'};
          int i = 0;
  
          puts("Enter Any String => ");
          gets(Name);
          
          while( Name[i] != '\0' )
          {
                  Copy_Name[i] = Name[i];
                  i++;
          }
          
          Copy_Name[i] = '\0';
          
          printf("\n\n Given String Was => %s .",Name);
          
          printf("\n\n Copied To New String Is => %s .",Copy_Name);
          
          getch();
          return 0;
}