#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

void Mult();

int main()
{
    Mult();
    
    printf("\n After 1st Call Back To Main().\n\n");
    
    Mult();
    
    printf("\n After 2nd Call Back To Main().\n\n");
    
    Mult();
    
    printf("\n After 3rd Call Back To Main().\n\n");

    getch();
    return 0;
}

void Mult()
{
    static int iNum = 12;
    
    printf("\n\t Function Call.\n");
    
    iNum = iNum * 10;
    
    printf("\n Changing Value Of iNum = %d.",iNum);
    
    return;
}