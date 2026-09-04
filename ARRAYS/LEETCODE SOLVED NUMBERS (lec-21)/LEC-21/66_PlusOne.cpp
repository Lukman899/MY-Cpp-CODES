#include<iostream>
#include<vector>
using namespace std;
int main(){

}
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        vector<int> ans;

        for (int i = digits.size() - 1; i >= 0; i--) {

            if (carry == 0) {
                ans.push_back(digits[i]);
                continue;
            }

            int sum = digits[i] + carry;

            if (sum < 10) {
                carry = 0;
                ans.push_back(sum);
            } else {
                carry = 1;
                ans.push_back(0);
            }
        }

        if (carry == 1)
            ans.push_back(1);
        // reverse(ans.begin(), ans.end()); its commented due to error
        return ans;
    }
};