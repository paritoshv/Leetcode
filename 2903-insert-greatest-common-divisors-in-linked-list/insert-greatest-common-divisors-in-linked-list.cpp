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
    int gcd(int a, int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head->next == nullptr) return head;

        ListNode* curr = head;
        ListNode* forw = head->next;

        while(forw != nullptr){
            int gcdV = gcd(curr->val, forw->val);
            ListNode* gcdNode = new ListNode(gcdV);

            curr->next = gcdNode;
            gcdNode->next = forw;

            curr = forw;
            forw = forw->next;
        }
        return head;
    }
};