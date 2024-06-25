#include <stdio.h>
void printArray(int arr[],size_t size);
int getMax(int arr[], size_t size);
void countingSort(int arr[], size_t size, int place);
void radix(int arr[], int size);

int main(void){
    int arr[] = {121, 432, 564, 23, 1, 45, 788};
    size_t size = sizeof(arr)/ sizeof(arr[0]);
    radix(arr, size);
    printArray(arr, size);
}

void printArray(int arr[], size_t size){
    for(size_t i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
// Getting the largest element of the array.
int getMax(int arr[], size_t size){
    int max = arr[0];
    for(size_t i = 1; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
void countingSort(int arr[], size_t size, int place) {
    int output[size + 1];
    int max = (arr[0] / place) % 10;

    for (size_t i = 1; i < size; i++) {
        if (((arr[i] / place) % 10) > max)
            max = arr[i];
    }
    int count[max + 1];

    for (int i = 0; i < max; ++i)
        count[i] = 0;

    // Calculate count of elements
    for (size_t i = 0; i < size; i++)
        count[(arr[i] / place) % 10]++;

    // Calculate cumulative count
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Place the elements in sorted order
    for (int i = size - 1; i >= 0; i--) {
        output[count[(arr[i] / place) % 10] - 1] = arr[i];
        count[(arr[i] / place) % 10]--;
    }

    for (int i = 0; i < size; i++)
        arr[i] = output[i];
}
void radix(int arr[], int size) {
    // Get maximum element
    int max = getMax(arr, size);

    // Apply counting sort to sort elements based on place value.
    for (int place = 1; max / place > 0; place *= 10)
        countingSort(arr, size, place);
}