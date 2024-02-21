#include <stdio.h>
 
int main()
{
    char name[100];
    printf("Enter your name: ");
    // scanf("%s", name);
    fgets(name, sizeof(name), stdin);
    // printf("Your name is %s", name);
    //*********** puts is used to print string separated by whitespaces
    // puts(name);
    // and scanset also can do the same 
    // using scanset in scanf 
    // char str[20];
    // scanf("%[^\n]s", str); 
  
    // printing read string 
    printf("%s", name); 

    return 0;
}