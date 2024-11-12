#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string> s;
    string str;

    while(cin >> str){
        s.insert(str);
    }

    cout << s.size() << "\n";

    return 0;
}