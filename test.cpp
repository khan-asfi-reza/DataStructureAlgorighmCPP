#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    if(a % 2 == 0 && a != 2 ){
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}