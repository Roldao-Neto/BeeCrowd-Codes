#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d;

    scanf("%d %d", &n, &d);
    while(n || d)
    {
        int m[d][n];

        for(int i=0; i<d; i++){
            for(int j=0; j<n; j++){
                scanf("%d", &m[i][j]);
            }
        }

        bool resp = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<d; j++){
                if(m[j][i]){
                    if(j==d-1){
                        resp = 1;
                    }
                }else{
                    break;
                }
            }
        }

        if(resp) printf("yes\n");
        else printf("no\n");

        scanf("%d %d", &n, &d);
    }

    return 0;
}