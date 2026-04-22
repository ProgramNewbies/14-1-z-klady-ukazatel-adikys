#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int soucet;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int *p_b = &b;
    int *p_a = &a;
    int *p_c = &c;
    soucet = *p_a + *p_b + *p_c;
    int max = *p_a;
    if (max < *p_b)
    {
       max = *p_b;
    };
    if (max < *p_c)
    {
        max = *p_c;
    };
    
    
    printf("Soucet: %d\n", soucet);
    printf("Maximum: %d\n", max);

    if (soucet % 2 == 0)
    {
        printf("Soucet je lichy");
    } else (
        printf("Soucet je sudy")
    );
    
    return 0;
}