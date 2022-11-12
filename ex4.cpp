#include <bits/stdc++.h>
using namespace std;

void boubleSort(vector<int> &array){
    for(int i = 0 ; i < array.size()-1 ; i++){
        for(int j= i+1; j < array.size(); j++){
            if(array[i] > array[j]){
                swap(array[i], array[j]);
            }
        }
    }
}

int main(){
    vector<int> array{5, 3, 2, 4, 7, 1, 0, 6};
    boubleSort(array);
    for(int n: array){
        cout<< n << " ";
    }
    return 0;
}