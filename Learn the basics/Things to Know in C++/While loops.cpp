#include<iostream>
using namespace std;

class Solution {
    public:
    int whileLoop(int d) {
        int count = 1,sum = 0;

        while(count <= 50){
            sum += d;
            d += 10;
            count++;
        }
        cout << sum;
        return sum;
    }
};

int main(){
    Solution obj;
    obj.whileLoop(1);
    return 0;
}