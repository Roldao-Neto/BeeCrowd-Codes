#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h1, m1, h2, m2;

    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    while(h1 || m1 || h2 || m2)
    {
        int ini, fim;
        ini = h1*60 + m1;
        fim = h2*60 + m2;

        if(ini<=fim){
            printf("%d\n", fim-ini);
        }else{
            printf("%d\n", fim-ini+(24*60));
        }

        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    }

    return 0;
}