#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    int num[2001] = {0};

    scanf("%d", &n);

    while(n--){
        scanf("%d", &x);
        num[x]++;
    }

    for(int i=1; i<2001; i++){
        if(num[i]) printf("%d aparece %d vez(es)\n", i, num[i]);
    }

    return 0;
}