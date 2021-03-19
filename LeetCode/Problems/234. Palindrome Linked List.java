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
    public boolean isPalindrome(ListNode head) {
        ListNode node = head;
        Stack<Integer> s = new Stack<Integer>();
        while(node != null){
            s.push(node.val);
            node  = node.next;
        }
        
        while(head!=null){
            if(head.val != s.pop()){
                return false;
            }
            head = head.next;
        }
        return true;
    }
}