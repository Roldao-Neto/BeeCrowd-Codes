#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int t, menor, pos;

    scanf("%d", &t);
    menor = t;
    pos = 1;
    for(int i=2; i<n+1; i++){
        scanf("%d", &t);
        if(t<menor){
            menor = t;
            pos = i;
        }
    }

    printf("%d\n", pos);

    return 0;
}
