#include <stdio.h>
#include <stdlib.h>

char    **ft_split(char *str, char *charset);

int main(void)
{
    char    **res;
    char    *str;
    char    *charset;
    int i;
    
    str = "Hello World! Jaaaaaaaaaaaaaa! 123 12#4";
    charset = " ";
    res = ft_split(str, charset);
    printf("str = %s\n", str);
    printf("charset = %s\n\n", charset);
    i = 0;
    while(res[i] != '\0')
    {
        printf("%s\n", res[i]);
        free(res[i]);
        i++;
    }
}