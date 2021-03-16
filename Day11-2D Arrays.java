import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {



    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int[][] arr = new int[6][6];

        for (int i = 0; i < 6; i++) {
            String[] arrRowItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int j = 0; j < 6; j++) {
                int arrItem = Integer.parseInt(arrRowItems[j]);
                arr[i][j] = arrItem;
            }
        }
        scanner.close();

        int cLowestPossibleNumber = -9;
        int cCellCountInHourGlass = 3+1+3;

        int maxHourGlassSum = cLowestPossibleNumber * cCellCountInHourGlass;

        int i = 0;
        while (i < 4) {
            int tempSum;
            int j = 0;
            while (j < 4) {
                tempSum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
                tempSum += arr[i + 1][j + 1];
                tempSum += arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
                j++;
                maxHourGlassSum = tempSum > maxHourGlassSum ? tempSum : maxHourGlassSum;
            }
            i++;
        }
        System.out.println(maxHourGlassSum);
    }
}
