package separatePractise;

import java.util.HashMap;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;

public class a3b3c3d3 {

    public static void main(String args[])
    {
        Map<Integer, Set<String>> list=new HashMap<Integer,Set<String>>();
//        int n=(int) Math.pow(10,4);
        int n = 200;
        for(int a=0;a<n;a++){
            for(int b=a+1;b<n;b++){
                Set<String> l;
                int result=(int) (Math.pow(a, 3)+Math.pow(b, 3));
                if(list.containsKey(result)){
                    l=list.get(result);
                    l.add(a+","+b);
                    list.put(result, l);
                }
                else{
                    l=new TreeSet<>();
                    l.add(a+","+b);
                    list.put(result, l);
                }
            }
        }for(Map.Entry<Integer,Set<String>> entry:list.entrySet()){
        Set<String> l=entry.getValue();
        if(l.size() >= 2){
            System.out.print(entry.getKey()+": ");
            for(String s:l){
                System.out.print(s+" ; ");
            }
            System.out.println();
        }
    }
    }

}


