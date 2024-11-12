#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    scanf("%d", &k);

    int t1 = 1, t2 = 2, aux;
    vector<int> acumula;

    while(acumula.size()<k+1)
    {
        for(int i=t1+1; i<t2; i++){
            acumula.push_back(i);
            if(acumula.size()==k+1) break;
        }

        aux = t1+t2;
        t1 = t2;
        t2 = aux;
    }

    printf("%d\n", acumula[k-1]);

    return 0;
}
