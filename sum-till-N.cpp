#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;
    int sum = 0;
    for(int i = 1; i <= a; i++){
        sum += i;
    }
    cout << "Sum of numbers from 1 to " << a << " is: " << sum << endl;
    return 0;
}
