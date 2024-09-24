#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    int n, x;
    cin >> n;

    while(n--)
    {
        cin >> s;
        cin >> x;

        for(int i=0; i<s.size(); i++){
            s[i] = s[i] - x;
            if(s[i]<'A') s[i] = s[i] + 'Z' - 'A' + 1;
        }

        cout << s << "\n";
    }

    return 0;
}
