#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int t) {
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == t) {
            return mid;
        } else if (arr[mid] < t) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return 0; // Element not found
}
int main(){
    int n =5, arr[5]={1,3,4,5,6};
    int t= 5; 
    int result;
    result= binarysearch(arr,n,t);
    cout<<"the index of the target element is: "<<result<<endl;
    return 0;
}