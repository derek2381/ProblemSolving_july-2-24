// problem link
// https://leetcode.com/problems/intersection-of-two-arrays-ii/description/?envType=daily-question&envId=2024-07-02


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp1, mp2;

        for(int i : nums1){
            mp1[i]++;
        }

        for(int i : nums2){
            mp2[i]++;
        }

        vector<int> res;

        for(auto it : mp1){
            if(mp1[it.first] > 0 && mp2[it.first] > 0){
                int n = min(mp1[it.first], mp2[it.first]);
                for(int i = 0;i < n;i++){
                    res.push_back(it.first);
                }
            }
        }

        return res;



    }
};
