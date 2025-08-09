#include <iostream>
using namespace std;

int main() {
    int n, pos, val;
    cout << "Enter array size: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter position to insert (0 to " << n << "): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> val;

    if(pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return 0;
    }

    
    for(int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = val;
    n++; 

    cout << "Array after insertion: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
