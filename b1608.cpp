#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i ,b, q, idx, quant;
    unsigned int d;

    scanf("%d", &t);
    while(t--)
    {
        unsigned int preco, mpreco = 999999999;
        scanf("%u %d %d", &d, &i, &b);

        int ingredientes[i];

        for(int j=0; j<i; j++){
            scanf("%d", &ingredientes[j]);
        }

        for(int j=0; j<b; j++){
            preco = 0;
            scanf("%d", &q);
            for(int jj=0; jj<q; jj++){
                scanf("%d", &idx);
                scanf("%d", &quant);

                preco += quant*ingredientes[idx];
            }
            if(preco < mpreco) mpreco = preco;
        }

        printf("%d\n", d/mpreco);
    }

    return 0;
}
