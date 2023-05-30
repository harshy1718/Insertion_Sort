#include<iostream>
using namespace std;

void insertionsort (int array[], int size) {
    for (int i = 1; i < size ; i++) {
        int key = array[i];
        int j = i-1;
        while ((j >= 0) && (array[j] > key)) {
                array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}

int main () {
    int array[100];
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    insertionsort(array,n);
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
}