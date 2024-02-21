// #include <stdio.h>
// #include <string.h>
 
// int main()
// {
//     char s1[100] = "Anubhav", s2[100] = "Kumar";
//     printf("%d\n", strlen(s1));
//     strcpy(s1, s2);
//     puts(s1);
//     puts(s2);
//     printf("%s\n", s1);
//     printf("%s\n", s2);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
 
// defining the common size of the string arrays
#define size 50
 
int main()
{
    char destString[size] = "Geeksfor";
    char sourceString[size] = "Geeks";
    char tempDestString[size] = "Goo";
 
    printf("Length of Destination String: %d\n",
           strlen(destString));
 
    // copying sourceString to tempDestString using strcpy()
    strcpy(tempDestString, sourceString);
    printf("tempDestString after strcpy(): %s\n",
           tempDestString);
 
    // concatenating source to destination using strcat()
    strcat(destString, sourceString);
    printf("destString after Concatenation: %s\n",
           destString);
 
    // comparison using strcmp()
    printf("Comparing destString with sourceString: %d\n",
           strcmp(destString, sourceString));
 
    printf("Comparing first 5 characters: %d\n",
           strncmp(destString, sourceString, 5));
    
    // searching substring using strstr()
    printf("Searching sourceString in destString: %s\n",
           strstr(destString, sourceString));
 
    return 0;
}