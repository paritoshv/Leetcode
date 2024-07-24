class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector <pair<int, int>> numsMapped;
        for(int i =0; i<nums.size();i++){
            string st = to_string(nums[i]);
            for(int j=0; j<st.length(); j++){
                int k = int(st[j]- '0');
                st[j] = mapping[k]+ '0';
            }
            numsMapped.push_back(make_pair(nums[i],stoi(st)));
        }

        sort(numsMapped.begin(),numsMapped.end(), [&](pair<int,int> a, pair<int,int> b){
            return a.second < b.second;
        });

        for(int i =0;i<numsMapped.size();i++){
            nums[i]=numsMapped[i].first;
        }
        return nums;
    }
};