import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args){
		System.out.println("s");
		int a,b,c;
		for (int i = 0; i <= 9; i ++){
			for (int j = 0; j <= 9; j ++){
				if (i == j) continue;
				for (int k = 0; k <= 9; k++){
					if (j == k || i == k) continue;
					for (int n = 0; n <= 9; n ++){
						if (k == n || j == n || i == n) continue;
						int[] num = new int[10];
						num[i] = 1;num[j] = 1;num[k] = 1;num[n] = 1;
						//3 * 1 = 4
						a = i * 100 + j * 10 + k * 1;
						b = n;
						c = a * b;
						if (check(c % 10,c / 10 % 10,c / 100 % 10,c / 1000 % 10) && num[c % 10] == 1 && num[c / 10 % 10] == 1
								&& num[c / 100 % 10] == 1 && num[c / 1000 % 10] == 1){
							System.out.println(a + " * " + b + " = " + c);
						}
						a = i * 10 + j * 1;
						b = k * 10 + n;
						c = a * b;
						if (check(c % 10,c / 10 % 10,c / 100 % 10,c / 1000 % 10) && num[c % 10] == 1 && num[c / 10 % 10] == 1
								&& num[c / 100 % 10] == 1 && num[c / 1000 % 10] == 1){
							System.out.println(a + " * " + b + " = " + c);
						}
					}
				}
			}//end j
		}//end i
	}
	static boolean check(int a,int b,int c,int d){
		if (a == b || a == c || a == d) return false;
		if (b == c || b == d) return false;
		if (c == d) return false;
		return true;
	}
}
/*
201 * 6 = 1206
210 * 6 = 1260
351 * 9 = 3159
473 * 8 = 3784
501 * 3 = 1503
510 * 3 = 1530
15 * 93 = 1395
21 * 60 = 1260
21 * 87 = 1827
27 * 81 = 2187
30 * 51 = 1530
35 * 41 = 1435
*/






