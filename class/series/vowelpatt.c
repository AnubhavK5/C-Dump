#include<stdio.h>
// void vowel(void)
// {
//     printf("a");
//     printf("e");
//     printf("i");
//     printf("o");
//     printf("u");
    

// }

int main()
{   
    int n, k =1;
    scanf("%d", &n);
    for(int i=0; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            switch(k)
            {
                case 1:
                printf("%c", 'a');
                printf(" ");
                //  k++;
                break;
                case 2:
                printf("%c", 'e');
                printf(" ");
                //  k++;
                 break;
                case 3:
                printf("%c", 'i');
                printf(" ");

                //  k++;
                 break;
                case 4:
                printf("%c", 'o');
                printf(" ");
                //  k++;
                 break;
                case 5:
                printf("%c", 'u');
                printf(" ");
                //  k++;
                 break;

            }
            
            k++;
            if (k>5) k =1;
           
       
        
        }
                    // if (k>5) k =1;

         
        printf("\n");
    }
}