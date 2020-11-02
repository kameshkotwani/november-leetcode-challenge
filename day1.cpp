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
    int getDecimalValue(ListNode* head) {
      int ans=0,temp=1;  
      vector<int> res;
        ListNode *p=head;
      while(p!=NULL){
        res.emplace_back(p->val);
        p=p->next;
      }
      reverse(res.begin(),res.end());
      for(int i=0;i<res.size();i++)
      {
        ans+=res[i]*temp;
        temp*=2;
      }
      return ans;
    }
};
