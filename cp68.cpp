#include <iostream>

using namespace std;

int main() {
    long long n;
    cout << "Enter size ";
    cin >> n;

    if (n < 2) {
        cout<<-1<< endl;
        return 1; 
    }

    long long x = INT_MIN;
    long long y = INT_MIN;

    cout << "Enter elements";
    for (long long i = 0; i < n; ++i) {
        long long num;
        cin >> num;

        if (num > x) {
            y = x;
            x = num;
        } else if (num > y && num != x) {
            y = num;
        }
    }

    cout << "Second Largest Number: " << y << endl;

    return 0;
}
