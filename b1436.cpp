#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, x, resp;
    scanf("%d", &t);

    for(int i=1; i<=t; i++){
        scanf("%d", &n);
        for(int j=0; j<n; j++){
            scanf("%d", &x);
            if(j == n/2) resp = x;
        }

        printf("Case %d: %d\n", i, resp);
    }

    return 0;
}
