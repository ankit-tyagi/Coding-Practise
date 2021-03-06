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

    public ListNode mergeKListsSecondSolution(ListNode[] lists) {
        ListNode result = null, last = null;
        PriorityQueue<ListNode> pq = new PriorityQueue<>(Comparator.comparing(i -> i.val));
        for (ListNode list : lists) {
            if(list != null) {
                pq.add(list);
            }
        }
        if(pq.size()<1)
            return result;
        
        while (!pq.isEmpty()){
            ListNode temp = pq.poll();
            if(result == null){
                result = last = temp;
            }else{
                last.next = temp;
                last = temp;
                
            }
            if(temp.next != null){
                pq.add(temp.next);
            }
        }
        return result;
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