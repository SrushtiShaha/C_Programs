// Addition Of Two Numbers.

#include <stdio.h>
#include <conio.h>

void Add();

int main()
{
      Add();
      
      getch();  
      return 0;   
}

void Add()
{
      int N1 = 0, N2 = 0, Sum = 0;
      
      printf("\n Enter Any Two Numbers -> ");
      scanf("%d%d",&N1,&N2);
      
      Sum = N1 + N2;
      
      printf("\n\n Addition Of %d + %d = %d ", N1, N2, Sum);        
}
