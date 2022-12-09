class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int s_num = 0;
        // for (int i=0 ; i< nums.size() ; i++)
        for ( auto x : nums) {
            s_num = s_num ^ x;  // s_num ^= x; O(n), TC O(n), SC O(1)
        }
        return s_num;
        
    }
};