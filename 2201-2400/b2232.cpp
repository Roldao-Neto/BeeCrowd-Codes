#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long vet[32] = {1};

    for(int i=1; i<32; i++){
        vet[i] = vet[i-1]*2;
    }

    int t, n;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);  
        printf("%lu\n", vet[n]-1);
    }

    return 0;
}