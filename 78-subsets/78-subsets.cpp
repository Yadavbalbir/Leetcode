class Solution {
vector<int> sol;
vector<vector<int>> ans;


void rec(vector<int> &arr, int level, int n){
	if(level==n){
		//base case
		ans.push_back(sol);
		return;
	}
	
		// take
		sol.push_back(arr[level]);
		rec(arr, level+1, n);
		sol.pop_back();

		// don't take
		rec(arr, level+1, n);

}
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        rec(nums, 0, nums.size());
        
        return ans;
    }
};