package separatePractise;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;
import java.util.concurrent.TimeUnit;

public class stringChallenge {

    public static void main(String[] args){
        SimpleDateFormat sdf
                = new SimpleDateFormat("yy/MM/dd HH:mm:ss");
        String currentDate = new String("20/11/21 HH:MM:00");
        String currentDate1 = new String("20/11/21 HH:MM:00");
        String currentDate2 = new String("20/11/22 HH:MM:00");

        Scanner sc= new Scanner(System.in);
        String str= sc.nextLine();

        Integer h1 = 0, h2 = 0, m1 = 0, m2 = 0;
        String[] t = str.split("-");
        String[] t1 = t[0].split(":");
        String[] t2 = t[1].split(":");

        h1 = Integer.parseInt(t1[0]);
        h2 = Integer.parseInt(t2[0]);
        m1 = Integer.parseInt(t1[1].substring(0,2));
        m2 = Integer.parseInt(t2[1].substring(0,2));

        if(t1[1].contains("p")){
            h1+=12;
        }
        if(t2[1].contains("p")){
            h2+=12;
        }
        currentDate = currentDate.replaceAll("HH", h1.toString());
        currentDate = currentDate.replaceAll("MM", m1.toString());

        currentDate1 = currentDate1.replaceAll("HH", h2.toString());
        currentDate1 = currentDate1.replaceAll("MM", m2.toString());

        currentDate2 = currentDate2.replaceAll("HH", h2.toString());
        currentDate2 = currentDate2.replaceAll("MM", m2.toString());
        try {
            Date d1 = sdf.parse(currentDate);
            Date d2 = sdf.parse(currentDate1);
            Date d3 = sdf.parse(currentDate2);
            long diff = 0;
            if(d1.after(d2)){
                diff = d3.getTime()-d1.getTime();
                System.out.println("true");
            }else{
                diff = d2.getTime()-d1.getTime();
                System.out.println("false");
            }
            long minutes = TimeUnit.MILLISECONDS.toMinutes(diff);
            long diffMinutes = diff / (60 * 1000);


            System.out.println(Math.abs(minutes));


        } catch (ParseException e) {
//            e.printStackTrace();
        }

    }

}
