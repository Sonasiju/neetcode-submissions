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
    void reorderList(ListNode* head) {
        vector<int>output;
        vector<int>result;
        ListNode*temp=head;
        while(temp)
        {
            output.push_back(temp->val);
            temp=temp->next;
        }
        int n=output.size();
        int left=0;
        int right=n-1;
        while(left<=right)
        {
            if(left!=right)
            {
             result.push_back(output[left]);
             result.push_back(output[right]);
             left++;
             right--;
            }
            else
            {
                result.push_back(output[left]);
                break;
            }
        }
        temp=head;
        for(int i=0;i<n;i++)
        {
          temp->val=result[i];
          temp=temp->next;
        }
      
           }
};
