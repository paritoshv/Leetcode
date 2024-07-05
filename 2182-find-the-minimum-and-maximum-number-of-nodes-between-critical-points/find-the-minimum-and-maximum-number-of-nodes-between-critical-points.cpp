/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* prev = new ListNode(-1);
        ListNode* temp = head;
        int idx = 1;
        vector<int> ans;
        
        ListNode* forward = head->next;
        prev->next = temp;
        vector<int> criticals;
        while(temp!= nullptr){
            if(prev != nullptr && prev->val != -1 && forward != nullptr){
                if(prev->val > temp->val && forward->val > temp->val){
                    criticals.push_back(idx);
                } else if(prev->val < temp->val && forward->val < temp->val){
                    criticals.push_back(idx);
                }
            }
            if(forward != nullptr) forward = forward->next;
            temp = temp->next;
            prev = prev->next;
            idx++;
        }

        if(criticals.size()>=2){
            sort(criticals.begin(), criticals.end());

            int maxDist = criticals[criticals.size()-1]-criticals[0];
            int minDist = criticals[criticals.size()-1]-criticals[0];

            for(int i =1; i<criticals.size();i++){
                minDist = min(minDist,criticals[i] -criticals[i-1] );
            }
            ans.push_back(minDist);
            ans.push_back(maxDist);
        } else {
            ans.push_back(-1);
            ans.push_back(-1);
        }

        return ans;

    }
};