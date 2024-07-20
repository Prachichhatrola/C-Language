// 1 2 3
// 1 2
// 1

public class Solution {
    public static void nNumberTriangle(int n) {
        // Write your code here
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}
