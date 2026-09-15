#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter a and b numbers:" << endl;
    cin >> a >> b;
    if(a > b){
        cout << "b is minimum of the 2 numbers" << endl;
    }
    else if(a < b){
        cout << "a is minimum of the 2 numbers" << endl;
    }
    else{
        cout << "Both numbers are equal" << endl;
    }
    return 0;
}
