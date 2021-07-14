#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char c[100];
    int i, word=1;
    printf("Enter a string: ");
    gets(c);
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]==' ')
            word++;
    }
    printf("Total number of word in string: %d",word);
    getch();
    return 0;
}
