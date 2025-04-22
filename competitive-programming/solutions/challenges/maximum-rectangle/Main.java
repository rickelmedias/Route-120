public class Main {
    public static void main(String[] args) {
        char[][] matrix6 = {
            {'1', '0', '1', '0', '0'},
            {'1', '0', '1', '1', '1'},
            {'1', '1', '1', '1', '1'},
            {'1', '0', '0', '1', '0'}
        };

        solve(matrix6, matrix6.length, matrix6[0].length);

        char[][] matrix8 = {
            {'1', '0', '1', '0', '0'},
            {'1', '0', '1', '1', '1'},
            {'1', '1', '1', '1', '1'},
            {'1', '1', '1', '1', '0'}
        };

        solve(matrix8, matrix8.length, matrix8[0].length);
    }

    public static void solve(char[][] matrix, int m, int n) {
        int biggestRect = 0;
        
        int[] height = new int[n];      
        int[] left   = new int[n];      
        int[] right  = new int[n];      

        for (int j = 0; j < n; j++) {
            right[j] = n; 
        }
        
        for (int i = 0; i < m; i++) {
            int curLeft = 0;
            int curRight = n;

            for (int j = 0; j < n; j++) {
                height[j] = (matrix[i][j] == '1') ? height[j] + 1 : 0;
            }

            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == '1') {
                    left[j] = Math.max(left[j], curLeft);
                } else {
                    left[j] = 0;
                    curLeft = j + 1;
                }
            }

            for (int j = n - 1; j >= 0; j--){
                if (matrix[i][j] == '1') {
                    right[j] = Math.min(right[j], curRight);
                } else {
                    right[j] = n;
                    curRight = j;
                }
            }

            for (int j = 0; j < n; j++) {
                biggestRect = Math.max(biggestRect, (right[j] - left[j]) * height[j]);
            }
        }

        System.out.println(biggestRect);
    }
}