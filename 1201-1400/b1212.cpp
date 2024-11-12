#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int d1, d2;

    scanf("%u %u", &d1, &d2);
    while(d1 || d2){
        unsigned long long h = 1;
        int carry = 0, v1[10] = {0}, v2[9] = {0};
        for(int i=0; i<9; i++){
            v1[i] += (d1/h)%10;
            v2[i] = (d2/h)%10;
            h *= 10;
            if(v1[i]+v2[i]>=10){
                v1[i+1] = 1;
                carry++;
            }
        }
        if(carry == 0) printf("No carry operation.\n");
        if(carry == 1) printf("1 carry operation.\n");
        if(carry >= 2) printf("%d carry operations.\n", carry);

        scanf("%u %u", &d1, &d2);
    }

    return 0;
}
