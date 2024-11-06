#include<stdio.h>
#include<string.h>
int main()
{
    char a[80];
    int length;
 
    printf ("Enter your name: ");
    scanf ("%s", a);
    printf ("\"%s\"\n", a);
    printf ("\"%20s\"\n", a);
    printf ("\"%-20s\"\n", a);
    length = strlen(a) + 3;
    printf ("%*s\n", length, a);
 
    return 0;

}