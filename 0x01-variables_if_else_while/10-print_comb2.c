#include <stdio.h> 
/**
* main - short description
* Return: what does the function return
*/
int main(void)
{
char ch = '0';
char ch2 = '0';
char chara = ',';
char space = ' ';

for (ch = '0'; ch <= '9'; ch++)

{
for (ch2 = '0'; ch2 <= '9'; ch2++)
{
putchar(ch);
putchar(ch2);
putchar(chara);
putchar(space);         
} 
}   
return (0);
}
