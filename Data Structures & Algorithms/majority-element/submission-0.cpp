class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m1;
        for(int i = 0; i < nums.size(); i++) {
            m1[nums[i]] ++;
        }
        for(auto a : m1) {
            if(a.second > nums.size()/2) {
                return a.first;
            }
        }
    }
};