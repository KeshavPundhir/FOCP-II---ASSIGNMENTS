
// enhanced by ai 
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int temp = n;
        int count = 0;

        for (int i = 2; i * i <= temp; i++) {
            if (temp % i == 0) {
                count++;
                while (temp % i == 0) {
                    temp = temp / i;
                }
            }
        }

        if (temp > 1) {
            count++;
        }

        int answer = 1;

        for (int i = 0; i < count; i++) {
            answer = answer * 2;
        }

        cout << answer << '\n';
    }

    return 0;
}