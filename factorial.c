#include <stdio.h>
int main()
{
    int n,factoriel;
    scanf("%d", &n);
    factoriel=1;
    for (int i = 2; i <= n; i++)
        {
            factoriel *= i;
        }
            printf("Le factoriel de %d est : %d", n,factoriel);
    return 0;
}
