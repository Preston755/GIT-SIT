#include <iostream>
using namespace std;

void f(int n){
    int a = 0, b = 1;

    for (int i = 1; i <= n; i++){
        cout << a << endl;
        int c = a + b;
        a = b;
        b = c;

    }
}

int main(){
    int n;
    cout << "Введите количество чисел Фибоначчи: ";
    cin >> n;

    f(n);

    return 0;
}
