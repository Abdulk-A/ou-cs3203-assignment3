#include <iostream>
#include <vector>
using namespace std;

int listSum(vector<int>arr);
int listProduct(vector<int>arr);

int main(){

    const int ARRAY_SIZE = 10; 
    vector<int> arr;
    cout << "Please enter Number: " << endl;
    int num;
    for(int i = 0; i < ARRAY_SIZE; i++){
        cin >> num;
        arr.push_back(num);
    }

    int sum = listSum(arr),
        prod = listProduct(arr);

    cout << sum << endl;
    cout << prod << endl;
    return 0;
}

int listSum(vector<int>arr){
    int sum = 0;

    for(int i = 0; i < arr.size();i++){
        sum += arr[i];
    }

    return sum;
}

int listProduct(vector<int>arr){
    int prod = 1;

    for(int i = 0; i < arr.size();i++){
        prod *= arr[i];
    }

    return prod;
}