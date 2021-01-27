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
    public ListNode mergeKLists(ListNode[] lists) {
        ListNode resultNode = null;
        for (ListNode list : lists) {
            resultNode = calculateResult(resultNode, list);
        }
        return resultNode;
    }
    
    private ListNode calculateResult(ListNode resultNode, ListNode list) {
        if(list == null)
            return resultNode;
        if(resultNode == null)
            return list;
        if(resultNode.val < list.val){
            resultNode.next = calculateResult(resultNode.next,list);
            return resultNode;
        }else{
            list.next = calculateResult(resultNode,list.next);
            return list;
        }
    }
}