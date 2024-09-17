class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> ss1;
        int i =0;
        string temp="";
        while(i<s1.size()){
            if(s1[i]==' '){
                if(ss1.find(temp)==ss1.end()){
                    ss1.insert(make_pair(temp,1));
                } else{
                    ss1[temp]--;
                }
                temp = "";
            } else{
                temp+=s1[i];
            }
            i++;
        }
        i=0;
        if(ss1.find(temp)==ss1.end()){
            ss1.insert(make_pair(temp,1));
        } else{
            ss1[temp]--;
        }
        temp = "";
        while(i<s2.size()){
            if(s2[i]==' '){
                if(ss1.find(temp)==ss1.end()){
                    ss1.insert(make_pair(temp,1));
                } else{
                    ss1[temp]--;
                }
                temp = "";
            } else{
                temp+=s2[i];
            }
            i++;
        }
        if(ss1.find(temp)==ss1.end()){
            ss1.insert(make_pair(temp,1));
            temp = "";
        } else{
            ss1[temp]--;
            temp = "";
        }
        vector<string> ans;
        for(auto j : ss1){
            // cout<< j.first << " " << j.second <<"\n";
            if(j.second>0){
                ans.push_back(j.first);
            }
        }
        return ans;
    }
};