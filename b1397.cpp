#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y, x1, y1;

    scanf("%d", &n);
    while(n){
        x1 = 0;
        y1 = 0;

        for(int i = 0; i < n; i++)
        {
            scanf("%d %d", &x, &y);

            if(x!=y){
                if(x>y){
                    x1++;
                }else{
                    y1++;
                }
            }
        }

        printf("%d %d\n", x1, y1);

        scanf("%d", &n);
    }

    return 0;
}
