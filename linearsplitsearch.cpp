#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 0, 40, 50, 60, 70, 80, 90, 100};
    int a = 10;
    int n;
    cout<<"enter a number to search"<<endl;
    cin>>n;

    int mid = a / 2;

    int b = -1;
    for (int i = 0; i < mid; i++) {
        if (arr[i] == n) {
            b = i;
            break;
        }
    }

    if (b == -1) {
        for (int i = mid; i < a; i++) {
            if (arr[i] == n) {
                b = i;
                break;
            }
        }
    }

    if (b != -1) {
        cout << "number " << n << " found at index: " << b << endl;
    } else {
        cout << "number " << n << " not found in the array." << endl;
    }

    return 0;
}
