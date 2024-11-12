#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c, p;
    char t1, t2;

    scanf("%d", &c);
    while(c--)
    {
        int r = 0, g = 0, b = 0;

        scanf("%d", &p);

        for(int i=0; i<p; i++)
        {
            scanf(" %c %c", &t1, &t2);

            if(t1=='B'){
                if(t2=='G'){
                    b += 1;
                }else{
                    b += 2;
                }
            }
            if(t1=='R'){
                if(t2=='B'){
                    r += 1;
                }else{
                    r += 2;
                }
            }
            if(t1=='G'){
                if(t2=='R'){
                    g += 1;
                }else{
                    g += 2;
                }
            }
        }

        if(r==g && g==b){
            printf("trempate\n");
        }else{
            if(r>=g && r>=b){
                if(r==g || r==b){
                    printf("empate\n");
                }else{
                    printf("red\n");
                }
            }else if(b>=r && b>=g){
                if(b==g || b==r){
                    printf("empate\n");
                }else{
                    printf("blue\n");
                }
            }else if(g>=b && g>=r){
                if(g==r || g==b){
                    printf("empate\n");
                }else{
                    printf("green\n");
                }
            }
        }
    }

    return 0;
}
