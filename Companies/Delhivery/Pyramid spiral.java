import java.util.Scanner;
import java.util.Arrays;

class solution {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0) {
            
            int len = sc.nextInt();
            int h = sc.nextInt();
            sc.nextLine();
            String line = sc.nextLine();
            
            // System.out.println("line = " + line);
            
            char arr[][] = new char[h][2 * h - 1];
            for (int x = 0; x < h; x++) {
                Arrays.fill(arr[x], '_');
            }
            
            int i = h-1, j = 0, dir = 0, pos = 0;
            int top = 0, right = 2*h-1;
            int cnt = h * h;
            // for (int x = 0; x < h; x++) {
            //     for (int y = 0; y < 2 * h - 1; y++) {
            //         System.out.print(arr[x][y] + " ");
            //     }
            //     System.out.println("");
            // }
            
            while (cnt-- > 0) {
                // System.out.println("i = " + i + " j = " + j);
                 
                arr[i][j] = line.charAt(pos);
                pos = (pos + 1) % (len);
                
                if (dir == 0) {
                    i--; j++;
                } else if (dir == 1) {
                    i++; j++;
                } else if (dir == 2) {
                    j--;
                }
                
                
                // for (int x = 0; x < h; x++) {
                //     for (int y = 0; y < 2 * h - 1; y++) {
                //         System.out.print(arr[x][y] + " ");
                //     }
                //     System.out.println("");
                // }
                
                // System.out.println("\nUpdated i = " + i + " j = " + j);
                if (i < top || j == right || arr[i][j] != '_') {
                    
                    if (dir == 0) {
                        i++; j--;
                        i++; j++;
                        top++;
                    } else if (dir == 1) {
                        i--; j--;
                        j--;
                        right--;
                    } else if (dir == 2) {
                        j++;
                        i--; j++;
                    }
                    
                    dir = (dir + 1) % 3;
                }
            }
            
            for (int x = 0; x < h; x++) {
                for (int y = 0; y < 2 * h - 1; y++) {
                    System.out.print(arr[x][y] == '_' ? "  " : arr[x][y] + " ");
                }
                System.out.println("");
            }
            
        }
    }
}