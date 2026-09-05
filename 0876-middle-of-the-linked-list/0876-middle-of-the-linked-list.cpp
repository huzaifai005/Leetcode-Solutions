class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        // Both runners start at the very beginning of the chain
        ListNode* slow = head;
        ListNode* fast = head;
        
        // Fast runner needs to take 2 steps, so we must make sure
        // that neither the current node nor the next node is null!
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;         // Slow takes 1 step
            fast = fast->next->next;   // Fast takes 2 steps
        }
        
        // When fast hits the end, slow is standing exactly in the middle
        return slow; 
    }
};