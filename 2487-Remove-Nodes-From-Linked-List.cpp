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
    ListNode* removeNodes(ListNode* head) {
        if (!head) return nullptr;
        stack<int>st;
        while(head != nullptr){
            st.push(head->val);
            head = head->next;
        }
        stack<int>st2;
        st2.push(st.top());
        st.pop();
        while(!st.empty()){
            if(st2.top() <= st.top()){
            st2.push(st.top());
            }
            st.pop();
        }
        ListNode* ans = new ListNode();
        ListNode* current = ans;
        if(!st2.empty()){
            ans->val = st2.top();
            st2.pop();
        }else{
            return head;
        }
        while(!st2.empty()){
        current->next = new ListNode(st2.top());
        current = current->next;
        st2.pop();
        }
        return ans;
    }
};