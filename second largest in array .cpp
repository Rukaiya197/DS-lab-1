#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n < 2) {
        cout << "Array must have at least 2 elements." << endl;
        return 0;
    }

    int arr[100];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = arr[0];  

    
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;  
            largest = arr[i];          
        }
        else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];  
        }
    }

    if (largest == secondLargest) {
        cout << "No second largest element found." << endl;
    }
    else {
        cout << "Second largest element is: " << secondLargest << endl;
    }

    return 0;
}
