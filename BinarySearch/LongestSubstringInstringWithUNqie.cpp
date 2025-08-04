#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    vector<int> prime; // To store prime numbers
    int n = 11;        // Example usage: find the first 'n' primes
    int m = 3;         // Multiplier or any other purpose

    // Generate primes up to 100
    for (int i = 2; i <= 100; ++i) {
        if (isPrime(i)) {
            prime.push_back(i);
        }
    }

int sum=0;
int count=0;
for(int j=m-1;j>=0;j--)
for(int i=j;i>=0;i--){

while (i>=0)
{
if(n<sum+prime[i]){
    cout<<"i="<<i<<endl;
    cout<<"sum="<<sum<<endl;
    break;






    

}
else{
    sum=sum+prime[i];
    cout<<"outside sum ="<<sum<<endl;


}
count++;
cout<<"count="<<count<<endl;
cout<<"i="<<i<<endl;
if(sum+prime[i]>n){
    sum-=prime[i];
    break;

}
}

sum=sum+prime[i];

}


    // // Display the primes
    // cout << "Prime numbers up to 100:\n";
    // for (int p : prime) {
    //     cout << p << " ";
    // }
    // cout << endl;

    // // Example usage of n and m
    // cout << "\nFirst " << n << " primes (multiplied by " << m << "):\n";
    // for (int i = 0; i < n && i < prime.size(); ++i) {
    //     cout << prime[i] * m << " ";
    // }
    // cout << endl;

    return 0;
}
