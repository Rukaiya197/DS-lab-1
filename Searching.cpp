#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter array size: ";
    cin >> n;

    int arr[100];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Search number: ";
    cin >> target;

    int foundIndex = -1;  

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            foundIndex = i;
            break; 
        }
    }

    if (foundIndex != -1) {
        cout << "Your search number is found at index: " << foundIndex << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
