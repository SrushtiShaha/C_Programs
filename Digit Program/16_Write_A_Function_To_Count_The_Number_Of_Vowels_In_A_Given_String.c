/// Write A Function To Count The No. Of Vowels In A Given String. 
/// Consider Input :- String Output :- No. Of Vowels.
/// ( Count Even If A Vowel Is Repeated )

/// 1)Input :- computer 
///   Output:- 3
/// Calculation/Analysis - o,u,e
/// 2)Input :- sky
///   Output:- 0
/// Calculation/Analysis - No Vowels 
/// 3)Input :- COLLEGE 
///   Output:- 3
/// Calculation/Analysis - O,E,E

#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
    char ch[20] = {};
    int i = 0, Cnt = 0;
    
    printf("\n Enter A String => ");
    scanf("%s",&ch);
    
    while( ch[i] != '\0' )
    {
        if( ch[i] == 'a' || ch[i] == 'A' || ch[i] == 'e' || ch[i] == 'E' || ch[i] == 'i' || ch[i] == 'I' || ch[i] == 'o' || ch[i] == 'O' || ch[i] == 'u' || ch[i] == 'U' )
        {
            Cnt++;
        }
        
        i++;
    }
    
    printf("\n %d \n",Cnt);
    
    getch();
    return 0;
}
