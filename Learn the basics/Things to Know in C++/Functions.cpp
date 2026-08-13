#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:    
    void reverse(vector<int>& arr){
        int j =0;
        for(int i = arr.size()-1; j < i; i--, j++){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }    
        for(int x : arr){
            cout << x <<" ";
        }    
    }    
};    



int main(){
    Solution obj;
    vector<int> arr = {1,2,3,4,5};
    obj.reverse(arr);
    return 0;
}