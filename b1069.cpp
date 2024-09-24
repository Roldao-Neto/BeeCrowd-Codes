#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string st;
    scanf("%d", &n);

    while(n--){
        stack<char> pilha;
        int resp = 0;
        cin >> st;
        cin.ignore();

        for(int i=0; i<st.size(); i++){
            if(st[i]=='<') pilha.push('o');
            if(st[i]=='>' && pilha.size()>0){
                resp++;
                pilha.pop();
            }
        }

        printf("%d\n", resp);
    }

    return 0;
}
