#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;int sumsq=0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
        sumsq=sumsq+arr[i]*arr[i];
    }
    int expectedsum = n*(n+1)/2;
    int expectedsumsq = n*(n+1)*(2*n+1)/6;
    int diff = sum-expectedsum;
    int sqdiff=sumsq-expectedsumsq;
    int sumrepeatedmissing=sqdiff/diff;
    int repeated_no = (diff+sumrepeatedmissing)/2;
    int missing_no = repeated_no - diff;

    cout<< "Repeated number: "<<repeated_no<<endl;
    cout<< "Missing number: "<<missing_no<<endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;

    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input!" << endl;
    }

    return 0;
}
