#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int f, s, g, u, d, cont = 0;

    scanf("%u %u %u %u %u", &f, &s, &g, &u, &d);

    int andares[f+1] = {0};

    while(1){
        if(s==g){
            printf("%d\n", cont);
            return 0;
        }

        if(s<=0 || s>f){
            printf("use the stairs\n");
            return 0;
        }

        if(andares[s]){
            printf("use the stairs\n");
            return 0;
        }

        andares[s] = 1;

        if(s<g){
            cont++;
            s += u;
        }

        if(s>g){
            cont++;
            s -= d;
        }
    }
}
