#include <iostream>
#include <vector>
using namespace std;

int listSum(vector<int>arr);
int listProduct(vector<int>arr);
vector<int> reverseList(vector<int>arr);
void printArr(const vector<int>& arr);

/*
    This is for part 10 of assignment 3, hope you're having a good day.
*/

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

    vector<int> rArr = reverseList(arr);
    printArr(rArr);
    return 0;
}

int listSum(vector<int>arr){
    int sum = 0;

    for(int i = 0; i < arr.size();i++){
        sum += arr[i];
    }

    return sum;
}

void printArr(const vector<int>& arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int listProduct(vector<int>arr){
    int prod = 1;

    for(int i = 0; i < arr.size();i++){
        prod *= arr[i];
    }

    return prod;
}

vector<int> reverseList(vector<int>arr){
    vector<int> rArr;
    for(int i = arr.size() -1 ; i >= 0; i--){
        rArr.push_back(arr[i]);
    }

    return rArr;
}