class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> numToFreq(202);
        for (int num: nums) {
            numToFreq[num + 100]++;
        }
        vector<vector<int>> freqToNum(101);
        for (int i = 200; i >= 0; --i) {
            freqToNum[numToFreq[i]].push_back(i - 100);
        }

        vector<int> res; 
        for (int freq = 1; freq <= 100; ++freq) {
            for (int num: freqToNum[freq]) {
                for (int i = 0; i < freq; ++i) {
                    res.push_back(num);
                }
            }
        }
        return res;
    }
};