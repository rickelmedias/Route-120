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
class Solution
{
public:
    int dfs(ListNode *head)
    {
        if (head->next == nullptr)
        {
            int r = (head->val) * 2;
            head->val = r % 10;
            return r;
        }
        else
        {
            int d = dfs(head->next);
            int r = (head->val) * 2;
            if (d >= 10)
                r++;
            head->val = r % 10;
            return r;
        }
    }

    ListNode *doubleIt(ListNode *head)
    {
        if (dfs(head) >= 10)
        {
            ListNode *prevHead = head;
            head = new ListNode(1);
            head->next = prevHead;
        }
        return head;
    }
};