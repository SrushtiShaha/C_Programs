#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Emp
{
          int Id;
          char Name[40];
          float Sly;
          long long int MNum;
};

int main()
{
          struct Emp Epy[2];        
          int i = 0;
          
          for( i = 0; i < 2; i++ )
          {
                    printf("\n Enter %d Id's Information Of Employee => ",i+1);
                    
                    fflush(stdin);
                    
                    printf("\n Enter Employee Name -> ");
                    gets(Epy[i].Name);
                    
                    fflush(stdin);
                    
                    printf("\n Enter Salary -> ");
                    scanf("%f",&Epy[i].Sly);
                    
                    printf("\n Enter Mobile Number -> ");
                    scanf("%lld",&Epy[i].MNum);
          }
          
          for( i = 0; i < 2; i++ )
          {
                    printf("\n %d Id's Information => ",Epy[i].Id);
                    
                    printf("\n Name -> %s",Epy[i].Name);
                    
                    printf("\n Salary -> %f",Epy[i].Sly);
                    
                    printf("\n Number -> %lld",Epy[i].MNum);
          }
          
          getch();
          return 0;
}
