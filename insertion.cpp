#include <iostream>

using namespace std;

void insertion(int arr[], int& size, int element, int pos) {
    size++;
    if (pos < 0 || pos > size) {
        cout << "Invalid position" << endl;
        return;
    }
    for (int i=size-1; i>=pos;i--) {
        arr[i+1] = arr[i];
    }
    arr[pos]=element;
    
}

int main() {
    int  size = 5, pos = 2;
    int arr[size] = {2, 5, 3, 8, 3};
    int element = 4;
    cout << "Original array: ";
    for (int i=0; i<size;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertion(arr,size,element,pos);
    cout << "New array:";
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
