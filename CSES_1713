#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> arr2;
    for(int i = 0; i < n; i++){
        int sum = 0;   
        for(int j = 1; j <= arr[i]; j++){  
            if(arr[i] % j == 0){
                sum += 1;
            }
        }
        arr2.push_back(sum); 
    }
    for(int x : arr2){
        cout << x << " ";
    }
    return 0;
}
