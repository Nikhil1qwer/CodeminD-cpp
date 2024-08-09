#include <iostream>
using namespace std;

class Solution {
public:
    static int add(int a, int b) {
        return a + b;
    }
};

int main() {
    int a, b;
    cin >> a >> b;
    
    cout << Solution::add(a, b);
    
    return 0;
}