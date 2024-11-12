#include <stdio.h>
 
int main() {
 
    int h, m;
    int H, M;
    
    while(scanf("%d %d", &h, &m) != EOF)
    {
        H = h/30;
        M = m/6;
        
        if(H<10 && M<10){
            printf("0%d:0%d\n", H, M);
        }else{
            if(H<10 && M>=10){
                printf("0%d:%d\n", H, M);
            }else{
                if(M<10){
                    printf("%d:0%d\n", H, M);
                }else{
                    printf("%d:%d\n", H, M);
                }
            }
        }
    }
 
    return 0;
}