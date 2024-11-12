#include <stdio.h>
 
int main() {
 
    int x, ac = 2;
    scanf("%d", &x);
    
    while(ac<=10000){
        printf("%d\n", ac);
        ac += x;
    }
 
    return 0;
}