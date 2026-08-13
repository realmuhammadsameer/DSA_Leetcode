#include<iostream>
using namespace std;

class Solution {
public:
    void printNumber() {
        int n;
        std::cin >> n;
        std::cout << n;
    }
};

int main(){
    Solution obj;
    obj.printNumber();
    return 0;
}