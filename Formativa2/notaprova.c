#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n == 0)
        printf("SR\n");
    if (n >= 1 && n < 29)
        printf("II\n");
    if (n >= 30 && n < 49)
        printf("MI\n");
    if (n >= 50 && n < 69)
        printf("MM\n");
    if (n >= 70 && n < 89)
        printf("MS\n");
    if (n >= 90 && n <= 100)
        printf("SS\n");

    return 0;
}