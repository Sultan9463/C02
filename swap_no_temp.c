#include <stdio.h>

int main()
{
    int a, b;
    // lire les deux nombres
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    //apres l'inverse
    printf("Après échange : a = %d, b = %d", a, b);
    return 0;
}
