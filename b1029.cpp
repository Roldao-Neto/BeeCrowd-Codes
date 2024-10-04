#include <bits/stdc++.h>

using namespace std;

int main()
{
    int calls[40], fib[40];

    calls[0] = 0;
    calls[1] = 0;
    fib[0] = 0;
    fib[1] = 1;

    for(int i=2; i<40; i++){
        calls[i] = 2 + calls[i-1] + calls[i-2];
        fib[i] = fib[i-1] + fib[i-2];
    }

    int n, x;
    scanf("%d", &n);

    while(n--){
        scanf("%d", &x);
        printf("fib(%d) = %d calls = %d\n", x, calls[x], fib[x]);
    }

    return 0;
}
