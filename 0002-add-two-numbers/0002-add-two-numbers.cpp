class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);  // Dummy head to simplify logic
        ListNode* current = dummy;
        int carry = 0;
        
        // Process both lists while either has nodes or there's a carry
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;
            
            // Add value from l1 if it exists
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            
            // Add value from l2 if it exists
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            
            // Calculate new carry and digit value
            carry = sum / 10;
            int digit = sum % 10;
            
            // Create new node with the digit
            current->next = new ListNode(digit);
            current = current->next;
        }
        
        // Return the actual head (skip dummy)
        ListNode* result = dummy->next;
        delete dummy;  // Clean up dummy node
        return result;
    }
};