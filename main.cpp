#include <iostream> 
using namespace std;

int f(int n){
    if (n == 1){
        return 0;
    }
    if (n == 2){
        return 1;
    }
    return f(n - 1) + f(n - 2);
}

int main(){
    int n;
    cout << "Введите номер числа Фибоначчи: ";
    cin >> n;
    
    int r = f(n);
    cout << "fib(" << n << ") = " << r << endl;

    return 0;
}
