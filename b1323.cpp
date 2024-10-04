#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    unsigned long long aux[101];
    aux[1] = 1;
    for(int i=2; i<101; i++){
        aux[i] = aux[i-1] + (i*i);
    }

    scanf("%d", &n);
    while(n)
    {
        printf("%llu\n", aux[n]);

        scanf("%d", &n);
    }

    return 0;
}
