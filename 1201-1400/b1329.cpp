#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while(n)
    {
        int m = 0, j = 0, opc;
        for(int i=0; i<n; i++){
            scanf("%d", &opc);
            if(opc==0) m++;
            else j++;
        }

        printf("Mary won %d times and John won %d times\n", m, j);

        scanf("%d", &n);
    }

    return 0;
}
