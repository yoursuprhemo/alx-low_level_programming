#include <stdio.h>
/**
 * main - prints the alphabets with a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{   
   char alpha[] = "abcdefghijklmnopqrstuvwxyz";
   int i;
    
   for (i = 0;i<26;i++)
 {
   putchar(alpha[i]);   
 }
   putchar('\n');
   return (0);     
}
