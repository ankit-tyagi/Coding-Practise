/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode head, prev, sol = new ListNode();
        int carry = 0;
        sol.val = l1.val + l2.val;
        if(sol.val > 9){
            sol.val = sol.val%10;
            carry++;
        }
        head = sol; prev = sol;
        l1 = l1.next;
        l2 = l2.next;
        while(l1 != null && l2 != null){
            prev.next = new ListNode(); 
            sol = prev.next;
            prev = sol;
            sol.val = l1.val + l2.val + carry;
            if(carry>0)
                carry = 0;
            if(sol.val > 9){
                sol.val = sol.val%10;
                carry++;
            }
            l1 = l1.next;
            l2 = l2.next;
        }
        
        while(l1  != null){
            prev.next = new ListNode(); 
            sol = prev.next;
            prev = sol;            
            sol.val = l1.val + carry;
            if(carry>0)
                carry = 0;
            if(sol.val > 9){
                sol.val = sol.val%10;
                carry++;
            }
            l1 = l1.next;
        }
        
        while(l2 != null){
            prev.next = new ListNode(); 
            sol = prev.next;
            prev = sol;
            sol.val = l2.val + carry;
            if(carry>0)
                carry = 0;
            if(sol.val > 9){
                sol.val = sol.val%10;
                carry++;
            }
            l2 = l2.next;
        }
        
        if(carry > 0){
            prev.next = new ListNode(carry); 
        }
        
        return head;
        
    }
}