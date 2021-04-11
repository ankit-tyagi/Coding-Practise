package separatePractise;

import java.util.HashMap;

class st{
    static int i = 0;
    int j;
    st(){
        j = 15;
    }
}

public class classObjAsAKey {

    public static void main(String[] args){
        st student1 = new st ();
        st student2 = new st ();
        HashMap<st, String> map = new HashMap<>();

        map.put(student1, "Test1");
        map.put(student2, "Test2");
        map.put(student1, "Test3");

        System.out.println(map.get(student1));
    }

}
