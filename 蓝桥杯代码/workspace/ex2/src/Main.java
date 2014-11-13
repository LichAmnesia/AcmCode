import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args){
		System.out.println("s");
		int tmp = (1 << 16) - 1; 
		int sum = 0;
		for (int i = 0; i <= tmp; i ++){
			int a = 0,b = 0;
			int flag = 0;
			for (int j = 1; j <= 15; j ++){
				if (((i>>j) & 1) == 1) a ++;
			}
			if ((i & 1) == 0) flag = 1;
			//System.out.println(a);
			b = 15 - a;
			int ans = 2;
			if (a == 5 && b == 10 && flag == 1){
				for (int j = 15; j >= 0; j --){
					if (((i>>j) & 1) == 1) {
						ans *= 2;
					}else ans --;
				}
				int ans1 = 2;
				if (ans == 0) {
					sum ++;
					for (int j = 15; j >= 0; j --){
						if (((i>>j) & 1) == 1) 
							System.out.print("a");
						else System.out.print("b");
					}
					System.out.println("");
				}
				if (ans == 0) {
					for (int j = 15; j >= 0; j --){
						if (((i>>j) & 1) == 1) {
							System.out.print(ans1 * 2);
							ans1 *= 2;
						}
						else{ System.out.print(ans1 - 1);
							ans1 --;
						}
						
					}
					System.out.println("");
				}
			}
			
		}
		System.out.println(sum);
	}
}
