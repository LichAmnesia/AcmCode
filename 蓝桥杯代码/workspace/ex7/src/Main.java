
import java.io.*;
import java.util.*;

public class Main {
	static int[][] dp;
	public static void main(String[] args){
		
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int s = in.nextInt();
		int a = in.nextInt();
		int b = in.nextInt();
		int min = 0 - a * n;
		int max = 0 + b * n;
		int mid = a * n;
		int mod = 100000007;
		dp = new int[(a + b) * n + 10][n + 10];
		for (int i = 0; i <= (a + b) * n; i ++) dp[i][0] = 1;
		for (int i = 0; i <= (a + b) * n; i ++)
			for (int j = 1; j <=n; j ++){
				if (i - a >= 0) {
					dp[i][j] += dp[i - a][j - 1];
					dp[i][j] %= mod;
				}
				if (i + b <= (a + b) * n){
					dp[i][j] += dp[i + b][j - 1];
					dp[i][j] %= mod;
				}
			}
		System.out.println(dp[a*n][n]);
	}//end main
}//end Main
