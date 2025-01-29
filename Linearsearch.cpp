#include <iostream>
using namespace std;

int main(){
    int a, n;
    cout << "Enter the size of the array: ";
    cin >> a;
    int arr[a];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    cout << "Enter the number to search: ";
    cin >> n;
    int b = -1;
    for (int i = 0; i < a; i++) {
        if (arr[i] == n) {
            b = i;
            break;
        }
    }

    if (b != -1) {
        cout << "number  found at index: " << b << endl;
    } else {
        cout << "number not found in the array." << endl;
    }

    return 0;
}
