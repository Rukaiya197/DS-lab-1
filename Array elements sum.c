#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Array er size din: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Array er %d elements input dao:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    printf("Array elements er sum: %d\n", sum);
    
    return 0;
}
