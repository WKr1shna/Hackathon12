// #include<iostream>
// using namespace std;

// bool checkprime(int n) {
//     if (n <= 1) return false;
//     for (int i = 2; i < n; i++) {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// void printprime(int n) {
//     for (int i = 2; i <= n; i++) {
//         if (checkprime(i))
//             cout << i << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cin >> n;
//     printprime(n);
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int mid = (n + 1) / 2;
//     for (int i = 1; i <= mid; i++) {
//         for (int j = 1; j <= (mid - i) * 4; j++){
//             cout << " ";
//         }
//         for (int j = i; j >= 1; j--){
//             cout << j <<" ";
//         }
//         if (i > 1) {
//             for (int j = 1; j <= (i - 1) * 4 - 3; j++)
//                 cout << " ";
//         }
//         if (i > 1) {
//             for (int j = 1; j <= i; j++)
//                 cout << j << " ";
//         }
//         cout << endl;
//     }

//     for (int i = mid - 1; i >= 1; i--) {
//         for (int j = 1; j <= (mid - i) * 4; j++){
//             cout << " ";
//         }
//         for (int j = i; j >= 1; j--){
//             cout << j << " ";
//         }
//         if (i > 1) {
//             for (int j = 1; j <= (i - 1) * 4 - 3; j++)
//                 cout << " ";
//         }
//         if (i > 1) {
//             for (int j = 1; j <= i; j++)
//                 cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main() {
// 	int n;
// 	cin>>n;
// 	int mid=n/2;
// 	for(int i=0;i<n;i++){
// 		if(i==0 or i==n-1){
// 			for(int j=0;j<n-1;j++){
// 				cout<<"  ";
// 			}
// 			cout<<1;
// 		}
// 		else if(i<=mid){
// 			int num=i+1;
// 			for(int j=0;j<n-(2*i)-1;j++){
// 				cout<<"  ";
// 			}
// 			for(int j=0;j<i+1;j++){
// 				cout<<num<<" ";
// 				num--;
// 			}
// 			for(int j=0;j<2*i-1;j++){
// 				cout<<"  ";
// 			}
// 			num=num+1;
// 			for(int j=0;j<i+1;j++){
// 				cout<<num<<" ";
// 				num++;
// 			}
			
//         }
// 		else if(i>mid){
// 			int num=n-i;
// 			for(int j=0;j<2*i-n+1;j++){
// 				cout<<"  ";
// 			}
// 			for(int j=0;j<n-i;j++){
// 				cout<<num<<" ";
// 				num--;
// 			}
// 			for(int j=0;j<2*(n-i)-3;j++){
// 				cout<<"  ";
// 			}
// 			num=num+1;
// 			for(int j=0;j<n-i;j++){
// 				cout<<num<<" ";
// 				num++;
// 			}

// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }



// class Solution {
// public:
//     bool palindrome(string &s,int i,int j){
//         while(i<j){
//             if(s[i]!=s[j]){
//                 return false;
//             }
//             i++;
//             j--;
//         }
//         return true;
//     }
//     bool check(string &s, int i,int j){
//         while(i<j){
//             if(s[i]!=s[j]){
//                 if(palindrome(s,i+1,j)==true or palindrome(s,i,j-1)==true){
//                     return true;
//                 }
//                 else{
//                     return false;
//                 }
//             }
//             i++;
//             j--;
//         }
//         return true;
//     }
//     int almostPalindromic(string s) {
//         int maxi=0;
//         for(int i=0;i<s.length();i++){
//             for(int j=s.length()-1;j>=0;j--){
//                 if(check(s,i,j)==true){
//                     maxi=max(maxi,j-i+1);
//                     break;
//                 }
//             }
//         }
//         return maxi;
//     }
// };

// #include <iostream>
// using namespace std;

// bool correct(int arr[],int p,int n,int mid){
//     int total=0;
//     for(int i=0;i<n;i++){
//         int time=0;
//         int j=1;
//         while(time+j*arr[i]<=mid){
//             time+=j*arr[i];
//             j++;
//             total++;
//         }
//         if(total>=p){
//             return true;
//         }
//     }
//     return false;
// }


// int main(){
//     int T;
//     cin>>T;
//     while(T--){
//         int p;
//         cin>>p;
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int start=0,end=100000000;
//         int ans=0;
//         while(start<=end){
//             int mid=start+(end-start)/2;
//             if(correct(arr,p,n,mid)){
//                 ans=mid;
//                 end=mid-1;
//             }
//             else{
//                 start=mid+1;
//             }
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }


#include <iostream>
#include <stack>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> st;
        for(char c : s){
            if(!st.empty() && st.top() == c){
                st.pop(); 
            }
            else{
                st.push(c);
            }
        }
        if(st.empty()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}