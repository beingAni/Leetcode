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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        //assign a dummy node
        // point a previous point to dummy node to start

        ListNode prehead(-1);
        ListNode* prev=&prehead;

        // compare values of l1 and l2
        // assign prev to smaller head
        // move that list along

        while (l1!=nullptr && l2!=nullptr)
        {
            if(l1->val <= l2-> val)
            {
                prev->next=l1; // asssigning prev to l1 as head is smaller
                l1=l1->next; //move l1 along
            }

            else if(l2->val <= l1-> val)
            {
                prev->next=l2; // asssigning prev to l2 as head is smaller
                l2=l2->next; //move l2 along
            }

            prev= prev->next; // move prev along
        }

        prev-> next= l1==nullptr? l2: l1; //merge remaining list

        return prehead.next;
        
    }
};