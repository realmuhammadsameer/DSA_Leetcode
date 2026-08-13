#include<iostream>
using namespace std;

class Solution {
public:
    int forLoop(int low, int high) {
        // Your code goes here
        int sum = 0;
        for(int i = low; i<= high; i++){
            sum  += i;
        }
        cout << sum;
        return sum;
    }
};

int main(){
    Solution obj;
    obj.forLoop(1,5);
    return 0;
}