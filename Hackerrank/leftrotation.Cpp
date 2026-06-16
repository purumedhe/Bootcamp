#include <iostream>
using namespace std;

class leftrotation{
    public:
    void leftRotate(int arr[], int d, int n) {
        int temp[d]; // Temporary array to store the first d elements
        for (int i = 0; i < d; i++) {
            temp[i] = arr[i];
        }
        for (int i = d; i < n; i++) {
            arr[i - d] = arr[i];
        }
        for (int i = 0; i < d; i++) {
            arr[n - d + i] = temp[i];
        }
        cout<<"Array after left rotation: ";
        for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        } 
        cout << endl;
    }
};

int main(){
    int arr[5] = {1,2,3,4,5};
    cout<<"Original array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2; // Number of positions to rotate
    d = d % n; // Handle cases where d is larger than n
    leftrotation lr;
    lr.leftRotate(arr, d, n);
    return 0;
}