// pre storing and fetching 
// create hash arr or frequency array 
#include<iostream>
using namespace std;

int hashh[10000000]; // no need to declare 0 by default
int main(){
    
    int n ;
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }

    //precompute
    //int hash[10000000] = {0};  // 13 to be replace by the arr you want either 10 raise to the pow 6 
    // here above 10^6 we get segmentation fault so insteda we declare globally 
    
    for (int i=0; i<n; i++){
        hashh[arr[i]] +=1;
    }
    
    int q; //query 
    cin >> q;
    
    while(q--){
        int number;
        cin >> number;
        //fetching
        cout << hashh[number] << endl;
    }

    return 0;
}