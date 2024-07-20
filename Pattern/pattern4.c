// 1
// 2 2 
// 3 3 3

public class Solution {

    public static void nTriangle(int n) {

        // Write your code here

        for(int i=0;i<n;i++){

            for(int j=0;j<=i;j++){

                System.out.print((i+1)+" ");

            }

            System.out.println();

        }

    }

}
