class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        unordered_set<int> s;
        int a, b;
        int n = grid.size();
        int exp_sum=(n*n)*(n*n+1)/2;
        int actual_sum=0;
            for(int i = 0 ; i < grid.size(); i++)
            {
                 for(int j = 0 ; j < grid.size(); j++)
                 {
                    actual_sum+=grid[i][j];
                 if(s.find(grid[i][j]) != s.end())
                   {
                    a=grid[i][j];
                    ans.push_back(a);
                   }
                 s.insert(grid[i][j]);
                }
            }
        b=exp_sum+a-actual_sum;
        ans.push_back(b);

        return ans;

    }
};