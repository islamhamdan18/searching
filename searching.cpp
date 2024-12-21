#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100000];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int x;
    cin >> x;

    int position = -1;

    for (int i = 0; i < n; ++i) {
        if (a[i] == x) {
            position = i;
            break;
        }
    }

    cout << position << endl;
    return 0;
}