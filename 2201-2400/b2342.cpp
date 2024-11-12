#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    int p, q;
    char c;

    scanf("%d %c %d", &p, &c, &q);

    if(c == '+'){
        if(n >= p + q){
            printf("OK\n");
        }else{
            printf("OVERFLOW\n");
        }
    }else{
        if(n >= p * q){
            printf("OK\n");
        }else{
            printf("OVERFLOW\n");
        }
    }

    return 0;
}
