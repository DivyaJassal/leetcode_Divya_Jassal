#include<iostream>
using namespace std;
// only tells about one only but i want to tell for all
int main(){
    int count=0;
    int arr[100];
    int n;
    int i;
    int number;
    cout << "enter you special number"<< endl;
    cin >> number;
    cout << "enter the number of elements"<< endl;
    cin >> n;
    cout << "enter the elements"<< endl;
    for(i=0; i<n ; i++){
        cin >> arr[i];
    }

    for (i=0; i<n; i++){
        if(arr[i]== number){
            count = count +1;
        }
       
    }
    cout << "the number occurs" << count << "times." << endl;
    return 0;
}