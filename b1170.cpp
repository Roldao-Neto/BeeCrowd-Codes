#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    while(n--){
        float c;
        int cont = 0;

        scanf("%f", &c);

        while(c>1){
            cont++;
            c /= 2;
        }

        printf("%d dias\n", cont);
    }

    return 0;
}
