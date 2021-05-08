package separatePractise;

import java.util.HashMap;
import java.util.concurrent.atomic.AtomicInteger;

public class hashexample {

    int val;
    AtomicInteger ati;

    public hashexample(int val) {
        this.val = val;
    }

    @Override
    public String toString() {
        return "hashexample{" +
                "val=" + val +
                '}';
    }

    @Override
    public int hashCode() {
        return super.hashCode()%100;
    }

    @Override
    public boolean equals(Object o) {
        if(this.hashCode() == o.hashCode())
            return true;
        else
            return false;
    }

    public static void main(String[] args){
        int i;
        int j;
        HashMap<hashexample,Integer> map = new HashMap<>();
        for (i=0;i<1000;i++){
            hashexample hme = new hashexample(i);

            if(map.containsValue(hme)) {
                System.out.println("collision has occured  ->  "+ hme.hashCode());
                map.put(hme,i+1000);
            }else {
                System.out.println(Integer.valueOf(i).hashCode());
                map.put(hme,i);
            }
        }
        System.out.println("now we will print");
        map.forEach((k,v) -> System.out.println("key -> "+k+" :value -> "+v));
    }
}
