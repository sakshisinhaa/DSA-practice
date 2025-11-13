class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>newArr;
        for(int i:nums){
            newArr.push_back(i*i);
        }
        sort(newArr.begin(),newArr.end());
        return newArr;
    }
};