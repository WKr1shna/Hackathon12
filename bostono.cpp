// #include <iostream>
// using namespace std;

// int sumdigits(int n) {
//     int sum = 0;
//     while (n > 0) {
//         sum += n % 10;
//         n /= 10;
//     }
//     return sum;
// }

// int main() {
//     int n;
//     cin >> n;

//     int originalsum = sumdigits(n);
//     int temp = n;
//     int factorSum = 0;

//     for (int i = 2; i <= temp; i++) {
//         while (temp % i == 0) {
//             factorSum += sumdigits(i);
//             temp /= i;
//         }
//     }

//     if (factorSum == originalsum)
//         cout << "Boston Number";
//     else
//         cout << "Not a Boston Number";

//     return 0;
// }




// // call by value

// #include <iostream>
// using namespace std;

// void update(int a) {
//     a = a * 10;
// }

// int main() {
//     int a = 14;
//     cout << "before update " << a << endl;

//     update(a);

//     cout << "after update " << a << endl;
// }


// // call by reference
// #include <iostream>
// using namespace std;

// void update(int &a) {
//     a = a * 10;
// }

// int main() {
//     int a = 14;
//     cout << "before update " << a << endl;

//     update(a);

//     cout << "after update " << a << endl;
// }



// efficient method for finding boston no

#include <iostream>
using namespace std;

bool checkPrime(int n){
    if(n==2){
        return true;
    }
    if(n%2==0){
        return false;
    }
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int sumofdigits(int n){
    int sum=0;
    while(n!=0){
        int num=n%10;
        sum+=num;
        n/=10;
    }
    return sum;
}

int sumPrime(int n){
    int sum_prime=0;
    while(n%2==0){
        sum_prime+=2;
        n/=2;
    }

    for(int i=3;i*i<=n;i+=2){
        while(n%i==0){
        if(n%i==0){
            sum_prime+=sumofdigits(i);
            n/=i;
        }
    }
    }
    
    if(n>2){
        sum_prime+=sumofdigits(n);
    }
    return sum_prime;
}
int main(){
    int n;
    cin>>n;
    if(checkPrime(n)){
        cout<<"Not a Boston no"<<endl;
        return 0;
    }
    else if(sumofdigits(n)==sumPrime(n)){
        cout<<"A Boston no"<<endl;
    }
    else{
        cout<<"Not a Boston no"<<endl;
    }
    return 0;
}



void rotatestring(char a[],int n){
    int len=strlen(a);
    int i=len-1;
    while(i>=0){
        a[i+n]=a[i];
        i--;
    }
    i=0;
    int j=len;
    while(i<n){
        a[i]=a[j];
        i++;
        j++;
    }
    int main(){
        char a[10]="Hello";
        int n=3;
    }
}