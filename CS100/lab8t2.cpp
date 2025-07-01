#include <iostream>

using namespace std;

bool isPrime(int n){
    if (n <= 1){
        return false;
    }

    if (n == 2 || n == 3){
        return true;
    }

    for (int i = 2; i*i<n; i++){
        if (n%i == 0){
            return false;
        }
    }

    return true;
};


int primeFactorization(int n, int& numfactors){
    cout << "Prime Factors: ";
    if(isPrime(n)){
        cout << n << endl;
        numfactors++;
        return numfactors;
    }

    for (int i=2; i*i <= n; i++){
        while(isPrime(i) && n%i == 0){
            cout << i << " ";
            numfactors++;
            n /= i;
        }
    }

    if (n > 1){
        cout << n << endl;
        numfactors++;
    }

    return numfactors;
};

int main(){

int a;
int result;
int numfactors = 0;

cout << "Enter number: ";
cin >> a;

numfactors = primeFactorization(a, numfactors);
cout << "Number of factors : " << numfactors << endl ;

return 0;
}


// primes: 2,3,5,7,9,11,13,17,23,29,37

// 45
// 3 3 5

// 24
// 2 2 2 3

// 24   // 39   // 35
// 12   // 13   // 07
// 06   // 01   // 01
// 03
// 01