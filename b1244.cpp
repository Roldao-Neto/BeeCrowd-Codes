#include <bits/stdc++.h>

using namespace std;

bool Rcomp(const string &a, const string &b) {
    return a.length() > b.length();
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    while(n--){
        vector<string> str;  

        string s;
        getline(cin, s);  

        stringstream ss(s);
        string prod;

        while(ss >> prod) str.push_back(prod);  

        stable_sort(str.begin(), str.end(), Rcomp);

        for(size_t i = 0; i < str.size(); ++i) {
            if (i != 0) cout << " ";  
            cout << str[i];
        }
        cout << "\n";
    }

    return 0;
}
