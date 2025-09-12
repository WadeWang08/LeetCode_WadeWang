class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer(2);
        unordered_set<int> A (nums1.begin(), nums1.end());
        unordered_set<int> B (nums2.begin(), nums2.end());

        for (auto num : A) {
            if (B.count(num)) {
                B.erase(num);
            } else {
                answer[0].push_back(num);
            }
        }
        for (auto num : B) {
            answer[1].push_back(num);
        }
        return answer;
    }
};