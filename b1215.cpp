#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string> palavras;

    string str;

    while(getline(cin, str)){
        string palavra;
        istringstream iss(str);
        
        for (char c : str) {
            if (isalpha(c)) { 
                palavra += tolower(c); 
            } else if (!palavra.empty()) { 
                palavras.insert(palavra); 
                palavra.clear(); 
            }
        } 
    }

    for (auto p : palavras) {
        cout << p << endl;
    }

    return 0;
}
