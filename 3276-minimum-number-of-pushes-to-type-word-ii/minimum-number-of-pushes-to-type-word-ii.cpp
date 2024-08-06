class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> mp;

        for(int i =0;i<word.length();i++){
            if(mp.find(word[i])==mp.end()){
                mp[word[i]]=1;
            } else{
                mp[word[i]]++;
            }
        }

        if(mp.size()<=8) return word.length();

        vector<int> arr;
        for(auto i : mp){
            arr.push_back(i.second);
        }
        sort(arr.rbegin(),arr.rend());

        int ans =0;
        for(int i =0; i<arr.size(); i++){
            if(i<8){
                ans+=arr[i];
            } else if(i>=8 && i<16){
                ans+=2*arr[i];
            } else if(i>=16 && i<24){
                ans+=3*arr[i];
            } else {
                ans+=4*arr[i];
            }
        }
        return ans;

        // if(mp.size()<=16) return 8+ (word.length();
    }
};