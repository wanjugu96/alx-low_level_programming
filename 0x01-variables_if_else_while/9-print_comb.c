#include <stdio.h> 

int main()
{
    char ch = '0';
    char chara = ',';
    char space = ' ';
    
    for (ch = '0'; ch <= '9'; ch++)
    {
            putchar(ch);
            putchar(chara);
            putchar(space);

    }   
    return (0);
}
