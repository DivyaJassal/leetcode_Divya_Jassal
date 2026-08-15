#include <iostream>
using namespace std;

void f(int i,int n){
    if(i>n){
        return;
    }
    cout << "Divya" << endl;
    f(i+1,n);
}

void f2(int i, int n){
    if(i>n){
        return;
    }
    cout << i << endl;
    f2(i+1, n);
}
void f3(int i, int n){
    if(i<n){
        return;
    }
    cout << i << endl;
    f3(i-1, n);
}


void summ(int i , int sum){
    if(i<1){
        cout << sum << endl;
        return;
    }
    summ(i-1, sum+i);
}

void fact(int i, int one){
    if(i==0 || i==1){
        cout << one << endl;
        return;
    }
    fact(i-1, one*i);
}

int main(){
    int n;
    cout <<"enter the no" << endl;
    cin >> n;
    fact(n, 1);
}