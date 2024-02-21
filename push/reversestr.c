#include<stdio.h>
#include<string.h>

int main() {
    char a[100] = "Anubhav Kumar", b[100];
    int len;
    len = strlen(a);
    int j = 0;

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", a[i]);
        b[j++] =a[i];
    }
    b[j] = '\0';
    printf("\n");
    printf("%s", b);
}
