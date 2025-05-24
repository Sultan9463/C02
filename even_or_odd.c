#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a % 2 == 0){
        printf("%d est un pair.\n", a);
    }
            else{
              printf("%d est un impair.\n", a);
            }
return 0;
}