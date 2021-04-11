package separatePractise;

import java.util.Scanner;

public class SAPAssessment {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String line = scanner.nextLine();
        int lineno = 1;

        while (!"END".equals(line)) {
            if (line.length() == 1) {
                System.out.println(lineno + " EVEN");
            } else {
                int pos = line.indexOf("*", 1);
                int gap = pos - 1;
                boolean isEven = true;

                while (pos != line.length() - 1 && isEven) {
                    int nextPos = line.indexOf("*", pos + 1);
                    isEven = (gap == nextPos - pos - 1);
                    pos = nextPos;
                }

                System.out.println(lineno + ((isEven)?" EVEN":" NOT EVEN"));
            }

            line = scanner.nextLine();
            lineno++;
        }
    }
}
