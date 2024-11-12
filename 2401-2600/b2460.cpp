#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n, x;

    scanf("%llu", &n);
    bool presente[100001] = {0};
    vector<unsigned long long> fila;

    for(unsigned long long i=0; i<n; i++){
        scanf("%llu", &x);

        presente[x] = 1;
        fila.push_back(x);
    }

    scanf("%llu", &n);
    for(unsigned long long i=0; i<n; i++){
        scanf("%llu", &x);

        presente[x] = 0;
    }

    vector<unsigned long long> resp;

    for(unsigned long long i=0; i<fila.size(); i++){
        if(presente[fila[i]]) resp.push_back(fila[i]);
    }

    for(unsigned long long i=0; i<resp.size()-1; i++){
        printf("%llu ", resp[i]);
    }
    printf("%llu\n", resp[resp.size()-1]);

    return 0;
}
