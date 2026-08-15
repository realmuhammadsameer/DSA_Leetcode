#include <iostream>
using namespace std;

class Solution {
public:
    void pattern6(int n) {
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n - i + 1; j++){
                cout << j;
            }
            cout  << endl;
        }
    }
};

int main(){
    Solution a;
    a.pattern6(5);
}