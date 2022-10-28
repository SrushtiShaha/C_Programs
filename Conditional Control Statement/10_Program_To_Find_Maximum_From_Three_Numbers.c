#include <stdio.h>
#include <conio.h>

int main()
{
            int N1 = 0, N2 = 0, N3 = 0;
            
            printf("\n Enter Any Three Numbers => ");
            scanf("%d%d%d",&N1,&N2,&N3);
            
            if( N1 > N2 && N1 > N3 )
            {
                       printf ("\n\n First Number %d Is Maximum.",N1);
            }
            else if( N2 > N1 && N2 > N3 )
            {
                        printf("\n\n Senond Number %d Is Maximum.",N2);
            }
            else if( N3 > N1 && N3 > N2 )
            {
                        printf("\n\n Third Number %d Is Maximum.",N3);
            }
            else
            {
                        printf("\n\n All The Three Numbers %d %d And %d Are Equal.",N1,N2,N3);
            }
            
            getch();
            return 0;
}
