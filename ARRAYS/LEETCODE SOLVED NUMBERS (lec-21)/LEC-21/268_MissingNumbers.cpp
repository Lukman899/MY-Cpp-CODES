#include<iostream>
#include<vector>
using namespace std;
int main(){

}
class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size();            
        vector<bool> flag(n+1,false);
            for(int i=0;i<n;i++){
                flag[nums[i]] = true;
        }
            for(int i=0;i<=n;i++){
                if(flag[i] == false) return i;
    }
        return 54; //can return anything;
        // TC = O(n);
}

    // int missingNumber(vector<int>& nums) {
    //     int n = nums.size();
    //     for(int i = 0;i<=n;i++){
    //         bool flag = false;
    //         for(int ele : nums){
    //             if(ele == i){
    //             flag = true;
    //             break;
    //             }
    //         }
    //         if(flag == false) return i;
    //     }
    //     return 0;
    // }
};