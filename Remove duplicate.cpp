#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int unique[100];
    int uniqueCount = 0;

    for(int i = 0; i < n; i++) {
        int found = 0;  
        for(int j = 0; j < uniqueCount; j++) {
            if(arr[i] == unique[j]) {
                found = 1;  
                break;
            }
        }

        
        if(found == 0) {
            unique[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < uniqueCount; i++) {
        cout << unique[i] << " ";
    }
    cout << endl;

    return 0;
}
