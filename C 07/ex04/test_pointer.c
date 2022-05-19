#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int var = 5;
    int var2 = 10;
    int var3 = 22;
    int *p_var1;
    int **p_var2;

    printf("var: %d\n", var);
    printf("address of var: %p\n\n", &var);

    p_var1 = &var;
    printf("*p_var1: %d\n", *p_var1);
    printf("p_var1[0]: %d\n", p_var1[0]);
    printf("address of p_var1: %p\n", &p_var1);
    printf("address of p_var1[0]: %p\n", &p_var1[0]);
    printf("address of var: %p\n\n", p_var1[0]);

    var = 12;
    printf("*p_var1: %d\n", *p_var1);
    printf("p_var1[0]: %d\n", p_var1[0]);
    printf("address of p_var1: %p\n", &p_var1);
    printf("address of p_var1[0]: %p\n", &p_var1[0]);
    printf("address of var: %p\n\n", p_var1[0]);

    p_var1 = &var2;
    printf("var2: %d\n", var2);
    printf("address of var2: %p\n", &var2);
    printf("*p_var1: %d\n", *p_var1);
    printf("p_var1[0]: %d\n", p_var1[0]);
    printf("address of p_var1[0]: %p\n", &p_var1[0]);
    printf("p_var1[1]: %d\n", p_var1[1]);
    printf("address of p_var1[1]: %p\n\n", &p_var1[1]);

    p_var1 = &var3;
    printf("var3: %d\n", var3);
    printf("address of var3: %p\n", &var3);
    printf("*p_var1: %d\n", *p_var1);
    printf("p_var1[0]: %d\n", p_var1[0]);
    printf("address of p_var1[0]: %p\n", &p_var1[0]);
    printf("p_var1[1]: %d\n", p_var1[1]);
    printf("address of p_var1[1]: %p\n", &p_var1[1]);
    printf("p_var1[1]: %d\n", p_var1[2]);
    printf("address of p_var1[2]: %p\n\n", &p_var1[2]);

    int i;

    i = 0;
    while (i < 3)
    {
        printf("p_var1[%d]: %d\n", i, p_var1[i]);
        printf("address of p_var1[%d]: %p\n", i, &p_var1[i]);
        i++;
    }

    /*p_var2 = &p_var1;
    printf("**p_var2: %d\n", **p_var2);
    printf("p_var2[0][0]: %d\n", p_var2[0][0]);
    printf("address of p_var2: %p\n", &p_var2);
    printf("address of p_var2[0][0]: %p\n", &p_var2[0][0]);*/
}