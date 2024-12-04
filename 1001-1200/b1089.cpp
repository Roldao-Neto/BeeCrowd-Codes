#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    while (n) {
        int tam = n + 2;
        vector<int> pontos(tam, 0);
        int picos = 0;

        for (int i = 1; i <= n; i++) scanf("%d", &pontos[i]);
        pontos[0] = pontos[n];
        pontos[n + 1] = pontos[1];

        for (int i = 1; i <= n; i++) {
            if ((pontos[i] > pontos[i - 1] && pontos[i] > pontos[i + 1]) ||
                (pontos[i] < pontos[i - 1] && pontos[i] < pontos[i + 1])) {
                picos++;
            }
        }

        printf("%d\n", picos);

        scanf("%d", &n);
    }

    return 0;
}
