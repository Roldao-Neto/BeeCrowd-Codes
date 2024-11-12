#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(cin >> n){
        int m;
        char l;
        int resp = 0;

        unordered_map<int, pair<stack<char>, stack<char>>> pares;

        while(n--){
            cin >> m >> l;
            if(l == 'E'){
                if(pares[m].first.size()==0) pares[m].second.push('.');
                else{
                    pares[m].first.pop();
                    resp++;
                }
            }else{
                if(pares[m].second.size()==0) pares[m].first.push('.');
                else{
                    pares[m].second.pop();
                    resp++;
                }
            }
        }

        cout << resp << "\n";
    }

    return 0;
}
