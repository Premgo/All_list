#include <iostream>
using namespace std;

bool checkprime(int);

int main() {

  int n;

  cout << "Enter a positive  integer: ";
  cin >> n;

  if (checkprime(n))
    cout << n << " is a prime number.";
  else
    cout << n << " is not a prime number.";

  return 0;
}

bool checkprime(int n) {
  bool isprime = true;

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1) {
    isprime = false;
  }

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      isprime = false;
      break;
    }
  }

  return isprime;
}
