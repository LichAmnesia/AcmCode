
import java.io.*;
import java.util.*;
import java.math.*;
public class Main {
	static BigInteger[] num;
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int m = in.nextInt();
		long p = in.nextLong();
		long ans = init(n, m).mod(num[(int)m]).longValue();
		System.out.println(ans % p);
	}//end main
	static BigInteger init(int n,int m){
		num = new BigInteger[n + 10];

		BigInteger sum = BigInteger.valueOf(2);
		num[1] = BigInteger.ONE;num[2] = BigInteger.ONE;
		for (int i = 3; i <= Math.max(n, m); i ++) {num[i] = num[i-1].add(num[i-2]);
			if (i <= n) sum = sum.add(num[i]);
		}
		return sum;
	}
	
	
	

}//end Main
