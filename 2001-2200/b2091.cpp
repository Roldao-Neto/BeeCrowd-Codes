#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    unsigned long long a;

    cin >> n;
    while (n != 0) {
        unordered_map<unsigned long long, int> count_map;

        for (int i = 0; i < n; i++) {
            cin >> a;
            count_map[a]++;
        }

        for (auto x : count_map) {
            if (x.second % 2 != 0) {
                cout << x.first << "\n";
            }
        }

        cin >> n;
    }

    return 0;
}
