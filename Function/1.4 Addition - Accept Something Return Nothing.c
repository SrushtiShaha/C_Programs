// Addition Of Two Numbers - Accept Something Return Something.

#include <stdio.h>
#include <conio.h>

int Add( int, int );

int main()
{
        int N1 = 0, N2 = 0,Sum = 0;
        
        printf("\n Enter Two Numbers => ");
        scanf("%d%d",&N1,&N2);
        
        Sum = Add(N1, N2);
        
        printf("\n Addition Of %d + %d = %d ",N1, N2, Sum);
  
        getch();
        return 0;
}

int Add( int N1, int N2)
{
        int dSum = 0;
        
        dSum = N1 + N2;
        
        return dSum;
}
