#include<stdio.h>
#include<conio.h> 

int main()
{
  char ch = '\0';
  printf("\n\t Enter a character =");
  scanf("%c",&ch);
  
  switch(ch)
  {
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U':
        printf("\n\t character is vowel");
        break;
        
      case 'B':
      case 'b':
      case 'C':
      case 'c':
      case 'D':
      case 'd':
      case 'F':
      case 'f':
      case 'G':
      case 'g':
      case 'H':
      case 'J':
      case 'j':
      case 'K':
      case 'k':
      case 'L':
      case 'l':
      case 'M':
      case 'm':
      case 'N':
      case 'n':
      case 'P':
      case 'p':
      case 'Q':
      case 'q':
      case 'R':
      case 'r':
      case 'S':
      case 's':
      case 'T':
      case 't':
      case 'V':
      case 'v':
      case 'W':
      case 'w':
      case 'X':
      case 'x':
      case 'Y':
      case 'y':
      case 'Z':
      case 'z':
        printf("\n\t Character is consonants");
        break;
        
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        printf("\n\t These ara the Digits");
        break;
        
      case '+':
      case '-':
      case '%':
      case '/':
        printf("\n\t These are the arithmetic operators");
        break;
        
      default:
        printf("\n\t These are the special syombol");
        break;   
  }
  getch();
  return 0;
  
}