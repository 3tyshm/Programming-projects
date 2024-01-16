#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to find the sum of prime numbers up to N
int sumOfPrimes(int N) {
    int sum = 0;
    for (int i = 2; i <= N; ++i) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int N;
    cout << "Enter a positive integer N: ";
    cin >> N;

    int result = sumOfPrimes(N);
    cout << "Sum of prime numbers up to " << N << ": " << result << endl;

    return 0;
}