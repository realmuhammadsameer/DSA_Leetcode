#include <iostream>
using namespace std;

class Solution {
public:
    void pattern10(int n) {
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout << "*";
            }
            cout << "\n";
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n - i; j++){
                cout << "*";
            }
            cout << "\n";
        }
    }
};

int main(){
    Solution a;
    a.pattern10(5);
    return 0;
}