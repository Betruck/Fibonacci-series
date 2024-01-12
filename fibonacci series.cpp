#include<iostream>
using namespace std;

int main(){
    int t1 = 0, t2 = 1, nextTerm = 0, n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "The first "<< n << " terms of the fibonacci series are: " << t1 << " " << t2 ;
    for(int i = 2; i <= n; i++){
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << " " << nextTerm ;
    }
    return 0;
}
