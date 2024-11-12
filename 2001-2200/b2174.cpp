#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string> s;
    string pokemon;
    int n;

    cin >> n;

    while(n--)
    {
        cin >> pokemon;
        s.insert(pokemon);
    }

    cout << "Falta(m) " << 151-s.size() << " pomekon(s).\n";

    return 0;
}