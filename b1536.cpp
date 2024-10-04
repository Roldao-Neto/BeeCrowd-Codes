#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    while(n--){
        int m1, v1, m2, v2, t1 = 0, t2 = 0;

        scanf("%d x %d", &m1, &v1);
        scanf("%d x %d", &m2, &v2);

        if(m1>v1) t1 +=3;
        if(m1<v1) t2 +=3;
        if(m2>v2) t2 +=3;
        if(m2<v2) t1 +=3;

        if(t1==t2){
            if((m1+v2)==(m2+v1)){
                if(v2==v1) printf("Penaltis\n");
                else{
                    if(v2>v1) printf("Time 1\n");
                    else printf("Time 2\n");
                }
            }else{
                if((m1+v2)>(m2+v1)) printf("Time 1\n");
                else printf("Time 2\n");
            }
        }else{
            if(t1>t2) printf("Time 1\n");
            else printf("Time 2\n");
        }
    }

    return 0;
}
