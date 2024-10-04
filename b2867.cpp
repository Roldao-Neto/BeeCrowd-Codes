#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c, n, m, cont;
    scanf("%d", &c);

    while(c--){
        scanf("%d %d", &n, &m);
        
        cont = floor(m * log10(n)) + 1;

        printf("%d\n", cont);
    }

    return 0;
}
