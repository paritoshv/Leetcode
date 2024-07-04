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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        vector<int> ans;
        int sum =0;
        while(temp != nullptr){
            if(temp->val != 0){
                sum += temp->val;
            } else {
                if(sum != 0){
                    ans.push_back(sum);
                    sum =0;
                }
            }
            temp = temp->next;
        }
        ListNode* ansHead = new ListNode(ans[0]);
        ListNode* curr = ansHead;
        for(int i =1; i<ans.size();i++){
            ListNode* k = new ListNode(ans[i]);
            curr->next = k;
            curr = curr->next;
        }

        return ansHead;
    }
};