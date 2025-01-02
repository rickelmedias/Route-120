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

// === SOLUTION 1 ===

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *currNode = head;
        ListNode *checkerNode = head;

        for (int i = 0; i < n; i++)
        {
            if (checkerNode == NULL)
                return head;
            checkerNode = checkerNode->next;
        }

        ListNode *prevNode = NULL;

        while (checkerNode != NULL)
        {
            prevNode = currNode;
            currNode = currNode->next;
            checkerNode = checkerNode->next;
        }

        if (prevNode == NULL)
            head = head->next;
        else
            prevNode->next = currNode->next;

        return head;
    }
};

// === SOLUTION 2 ===
/*
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *currNode = head;
        ListNode *prevNode;

        int size = getListSize(head);

        for (int i = 1; i <= size - n; i++)
        {
            prevNode = currNode;
            currNode = currNode->next;
        }

        if (currNode == head && head->next == NULL)
            head = NULL;
        else if (currNode == head)
            head = head->next;
        else
            prevNode->next = currNode->next;

        return head;
    }

private:
    int getListSize(ListNode *head)
    {
        int size = 0;
        while (head != NULL)
        {
            size++;
            head = head->next;
        }
        return size;
    }
};
*/