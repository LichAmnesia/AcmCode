import java.io.*;
import java.util.*;
import java.math.*;

public class euler13{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		BigInteger ans = BigInteger.valueOf(0);
		for (int i = 0; i < 100; i ++){
			BigInteger a = in.nextBigInteger();
			ans = ans.add(a);
		}
		System.out.println(ans);
	}
}