#include <iostream>
#include <vector>
using namespace std;

int listSum(vector<int>arr);
int listProduct(vector<int>arr);

int main(){

    const int ARRAY_SIZE = 10; 
    vector<int> arr;

    for(int i = 0; i < ARRAY_SIZE; i++){
        arr.push_back(2);
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