#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    while(getline(cin, s)){
        bool resp = 1;
        bool M = 0;
        bool m = 0;
        bool n = 0;

        if(s.length()>32 || s.length() < 6){
            resp = 0;
        }else{
            for(int i=0; i<s.length(); i++){
                if(!isalnum(s[i])){
                    resp = 0;
                }else{
                    if('A'<=s[i] && s[i]<='Z'){
                        M = 1;
                    }
                    if('a'<=s[i] && s[i]<='z'){
                        m = 1;
                    }
                    if('0'<=s[i] && s[i]<='9'){
                        n = 1;
                    }
                }
            }
        }

        if(!(M && m && n)) resp = 0;

        if(resp) cout << "Senha valida.\n";
        else cout << "Senha invalida.\n";
    }

    return 0;
}
