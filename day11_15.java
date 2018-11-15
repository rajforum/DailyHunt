import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class day11_15 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter input length: ");
        int n = sc.nextInt();

        int[] test = new int[n];

        System.out.print("Enter your data: ");
        for (int i=0; i<n; ++i){
            test[i]=sc.nextInt();
        }

        ArrayList<Integer> demo = new ArrayList<>();

        for(int i=0; i<test.length; i++){
            if(!demo.contains(test[i])) {
                demo.add(test[i]);
            }
        }

        System.out.println(Arrays.toString(test)+"\n"+demo.toString());


    }
}
