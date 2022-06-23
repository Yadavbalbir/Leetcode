class Solution {
vector<int> sol;
set<vector<int>> ans;
int cnt = 0;


void rec(vector<int> &arr, int level, int n){
	if(level==n){
		//base case
		ans.insert(sol); 
		for(int i=0; i<sol.size();i++){
			cout<<sol[i]<<" ";
		}
		cout<<endl;
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
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        rec(nums, 0, nums.size());
         vector<vector<int>> f_ans;
    for(auto v:ans){
        f_ans.push_back(v);
    }
    
    return f_ans;
    }
    
   
    
};