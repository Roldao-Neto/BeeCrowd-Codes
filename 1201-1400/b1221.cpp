#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    unsigned long long x;

    scanf("%d", &n);

    while(n--){
        scanf("%llu", &x);
        bool resp = 1;

        for(int i=2; i<=floor(sqrt(x)); i++){
            if(x%i==0){
                resp = 0;
                break;
            }
        }

        if(resp){
            printf("Prime\n");
        }else{
            printf("Not Prime\n");
        }
    }

    return 0;
}