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

    
    int freq[100] = {0};  
    int visited = -1;  

    for(int i = 0; i < n; i++) {
        if(freq[i] == visited) continue;  

        int count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = visited;  
            }
        }
        freq[i] = count;
    }

    cout << "Frequency of each element:" << endl;
    for(int i = 0; i < n; i++) {
        if(freq[i] != visited) {
            cout << arr[i] << " occurs " << freq[i] << " times" << endl;
        }
    }

    return 0;
}
