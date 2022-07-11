#include <stdio.h>
#include <conio.h>

struct Emp
{
          int Id;
          char Name[40];
          float Sly;
          long long int MNum;
};

int main()
{
          struct Emp E1;
          struct Emp E2;
          
          int i = 0;
          
          for( i = 0; i < 2; i++ )
          {
                    printf("\n Enter %d Id's Information Of Employee => ",i+1);
                    
                    printf("\n Enter Employee Name -> ");
                    gets(E1.Name);
                    
                    printf("\n Enter Salary -> ");
                    scanf("%f",&E1.Sly);
                    
                    printf("\n Enter Mobile Number -> ");
                    scanf("%lld",&E1.MNum);
          }
          
          for( i = 0; i < 2; i++)
          {
                    printf("\n %d Id's Information => ",E1.Id);
                    
                    printf("\n Name -> %s",E1.Name);
                    
                    printf("\n Salary -> %f",E1.Sly);
                    
                    printf("\n Number -> %lld",E1.MNum);
          }
          
          getch();
          return 0;
}