
// practicing/learning insertion & selection sort

#include <iostream>

void selectionSort(int * _arr, int _size) {
    int i,j, imin, temp;
    
    for (i=0; i<_size; i++) {
        imin = i;
        
        for (j=i; j<_size; j++) {
            if (_arr[j] < _arr[imin]) { // new min found
                imin = j;
            }
        }
        
        if (imin != i) { // swap if new min found
            temp = _arr[imin];
            _arr[imin] = _arr[i];
            _arr[i] = temp;
        }
    }
}

void insertionSort(int * _arr, int _size) {
    int i,j, temp;
    
    for (i=0; i<_size; i++) {
        j = i;
        
        while (j>0 && _arr[j]<_arr[j-1]) {
            temp = _arr[j-1];
            _arr[j-1] = _arr[j];
            _arr[j] = temp;
            j--;
        }
    }
}

void print(int *_arr, int _size) {
    for (int x=0; x<_size; x++) {
        std::cout << _arr[x] << std::endl;
    }
}

int main() {
    int arr[] = {5, 9, 3, 1, 4, 11, 2}; // unsorted list
    int size = sizeof(arr)/sizeof(arr[0]);
    
    //selectionSort(arr, size);
    insertionSort(arr,size);
    print(arr,size);
    
    
    
    return 0;
}
