#include <bits/stdc++.h>

using namespace std;

bool isConsoante(char a){
    return (a != 'A' && a != 'a' && a != 'E' && a != 'e' && a != 'I' && a != 'i' && a != 'O' && a != 'o' && a != 'U' && a != 'u');
}

int main()
{
    int n;
    string s;
    
    cin >> n;
    while(n--)
    {
        cin >> s;
        bool resp = 1;
        for(int i=0; i<s.size()-2; i++){
            if(isConsoante(s[i]) && isConsoante(s[i+1]) && isConsoante(s[i+2])) resp = 0;
        }

        if(resp) cout << s << " eh facil\n";
        else cout << s << " nao eh facil\n";
    }

    return 0;
}