class AllOne {
private:
  unordered_map <string, int> count;
  set<pair<int,string>> s;
public:
    AllOne() {
        
    }
    
    void inc(string key) {
        int n = count[key];
        count[key]++;
        s.erase({n,key});
        s.insert({n+1,key});     
    }
    
    void dec(string key) {
        int n = count[key];
        count[key]--;
        if(count[key]>0){
            s.erase({n,key});
            s.insert({n-1,key});  
        } else{
            s.erase({n,key});
            count.erase(key);
        }
    }
    
    string getMaxKey() {
        return !s.empty() ? s.rbegin()->second : "";   
    }
    
    string getMinKey() {
        return !s.empty() ? s.begin()->second : "";  
    }
};

/**
 * Your AllOne object will be instantiated and called as such:
 * AllOne* obj = new AllOne();
 * obj->inc(key);
 * obj->dec(key);
 * string param_3 = obj->getMaxKey();
 * string param_4 = obj->getMinKey();
 */