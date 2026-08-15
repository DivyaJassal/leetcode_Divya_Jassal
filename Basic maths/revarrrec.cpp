#include<iostream>
using namespace std;

void rev(int arr[], int l, int r){

    if(l>=r){
        return;
    }
    swap(arr[l], arr[r]);
    rev(arr, l+1, r-1);

}
int main(){
    int arr[100];
    int i;
    int n;
    cout << "no of elemnets" << endl;
    cin >> n;
    cout << "ent th elements" << endl;
    for(i=0; i<n ; i++){
        cin >> arr[i];
    }
    rev(arr, 0, n-1);

    for(i=0; i<n ; i++){
        cout << arr[i] << " ";
    }

}