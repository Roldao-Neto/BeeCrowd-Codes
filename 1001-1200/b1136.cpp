#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, x, dif;

    scanf("%d %d", &n, &m);
    while(n){
        bool jogadores[n+1] = {0};
        jogadores[0] = 1;
        int bolas[m];

        for(int i=0; i<m; i++){
            scanf("%d", &x);
            bolas[i] = x;
        }

        for(int i=0; i<m-1; i++){
            for(int j=i+1; j<m; j++){
                dif = bolas[i] - bolas[j];
                if(dif<0) dif = dif * (-1);
                jogadores[dif] = 1;
            }
        }

        bool resp = 1;

        for(int i=0; i<n+1; i++){
            if(!(jogadores[i])){
                resp = 0;
                break;
            }
        }

        if(resp) printf("Y\n");
        else printf("N\n");

        scanf("%d %d", &n, &m);
    }

    return 0;
}