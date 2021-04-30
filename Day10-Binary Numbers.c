
#include <stdio.h>
int main()
{ 
    int n;
    scanf("%d",&n);

    int c = 0;

    while (n) {
    n = (n & (n << 1));
    c++;
}
    printf ("%d\n", c);

    return 0;
}
