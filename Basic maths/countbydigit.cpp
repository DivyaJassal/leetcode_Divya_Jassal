#include<iostream>
using namespace std;

int main(){
    int n, rev=0, lastdigit;
    cout << "enter the number";
    cin >> n;

    while(n>0){
        lastdigit =n%10;
        n=n/10;
        rev= (rev*10)+ lastdigit;
    }
    cout << "the revrersed no is " << rev << endl;

}