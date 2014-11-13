import java.io.*;
import java.util.*;

public class Main {
	static int[] num = new int[20];
	static int[] vis = new int[20];
	static boolean dfs(int st){
		if (st == 12){
			
			if(check(num)){
				for (int i = 1; i <= 12; i ++){
					System.out.println(i + " " + num[i]);
				}
				return true;
			}
			return false;
		}
		for (int i = 2; i <= 12; i ++){
			if (vis[i] == 0){
				vis[i] = 1;
				num[st] = i;
				if (dfs(st + 1)) return true;
				vis[i] = 0;
				num[st] = 0;
				
			}//end if
		}//end for
		return false;
	}
	static boolean check(int[] num){
		int a = num[1] + num[3] + num[6] + num[8];
		int b = num[1] + num[4] + num[7] + num[11];
		int c = num[8] + num[9] + num[10] + num[11];
		int d = num[2] + num[3] + num[4] + num[5];
		int e = num[2] + num[6] + num[9] + num[12];
		int f = num[5] + num[7] + num[10] + num[12];
		if (a == b && b == c && c == d && d == e && e == f) return true;
		else return false;
	}
	public static void main(String[] args){
		System.out.println("s");
		num[1] = 1;num[2] = 8;num[12] = 3;
		vis[1] = 1;vis[8] = 1;vis[3] = 1;
		System.out.println(dfs(3));
		
	}//end main
}//end Main
