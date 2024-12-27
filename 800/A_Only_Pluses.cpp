#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int maxProduct = 0;

        for (int i = 0; i <= 5; ++i) {
            for (int j = 0; j <= 5 - i; ++j) {
                int k = 5 - i - j;
                int newA = a + i;
                int newB = b + j;
                int newC = c + k;
                maxProduct = max(maxProduct, newA * newB * newC);
            }
        }

        cout << maxProduct << endl;
    }

    return 0;
}
