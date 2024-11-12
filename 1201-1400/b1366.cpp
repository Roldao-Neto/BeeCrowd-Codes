#include <stdio.h>
 
int main() {
 
    int n, soma, ci, vi;
    
    while(1){
         scanf("%d", &n);
         
         if(n==0){
             break;
         }
         
        soma = 0;
        
        for(int i=1; i<=n; i++){
            scanf("%d %d", &ci, &vi);
            if(vi%2==0){
                soma += vi;
            }else{
                soma += vi - 1;
            }
        }
        printf("%d\n", soma / 4);
    }
    
    return 0;
}