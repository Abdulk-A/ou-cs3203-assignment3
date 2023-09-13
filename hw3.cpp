#include <iostream>
#include <vector>
using namespace std;

int listSum(vector<int>arr);

int main(){

    const int ARRAY_SIZE = 10; 
    vector<int> arr;

    for(int i = 0; i < ARRAY_SIZE; i++){
        arr.push_back(10);
    }

    int sum = listSum(arr);

    cout << sum << endl;
    
    return 0;
}

int listSum(vector<int>arr){
    int sum = 0;

    for(int i = 0; i < arr.size();i++){
        sum += arr[i];
    }

    return sum;
}