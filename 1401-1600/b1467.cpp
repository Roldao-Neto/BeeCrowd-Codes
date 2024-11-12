#include <bits/stdc++.h>

using namespace std;

int main()
{
    int op1, op2, op3;

    while(cin >> op1 >> op2 >> op3){
        if(op1 == op2 && op1 == op3) cout << "*\n";
        else if(op1 == op2) cout << "C\n";
        else if(op2 == op3) cout << "A\n";
        else if(op1 == op3) cout << "B\n";
    }

    return 0;
}
