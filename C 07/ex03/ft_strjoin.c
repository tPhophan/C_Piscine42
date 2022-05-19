#include <stdlib.h>

char*ft_to_str(char **strs, int ac, char *str, int *istr)
{
    int index;

    index = 0;
    while (strs[ac][index])
    {
        str[*istr] = strs[ac][index];
        *istr += 1;
        index++;
    }
    return (str);   
}

char*ft_strjoin(int size, char **strs, char *sep)
{
    char    *str;
    int     ac;
    int     index;
    int     istr;

    str = malloc(sizeof(strs));
    ac = 0;
    istr = 0;
    while (ac < size)
    {
        ft_to_str(strs, ac, str, &istr);
        index = 0;
        while (sep[index] != '\0' && ac != size - 1)
        {
            str[istr] = sep[index];
            istr++;
            index++;
        }
        ac++;
    }
    str[istr] = '\0';
    return (str);
}