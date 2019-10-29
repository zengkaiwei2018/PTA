#include <stdio.h>

int main(void)
{
    int i, j;
    char ch;
    while (scanf("%d %c %d", &i, &ch, &j) != EOF)
    {
        int result;
        switch (ch){
            case '-':
            {
                result = i - j;
                printf ("%d\n", result);  break;
            }
            case '+':
            {
                result = i + j;
                printf ("%d\n", result);  break;
            }
            case '*':
            {
                result = i * j;
                printf ("%d\n", result);  break;
            }
            case '/':
            {
                result = i / j;
                printf ("%d\n", result);  break;
            }
            case '%':
            {
                result = i % j;
                printf ("%d\n", result); break;
            }
                
            default:printf("ERROR\n");
        }
        
    }
    return 0;
}  
