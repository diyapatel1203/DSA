#include <iostream>
using namespace std;


int main() {
//    int n;
//    cout << "Enter number: ";
//    cin >> n;
//    
    int a=0;
    int b=1;
    int c;
    
    cout << "Fibonacci Series: " << a << " " << b << " ";

	int i = 2;
    while (i<10) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
        i++;    
}
    return 0;
}
