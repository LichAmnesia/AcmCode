import java.io.*;
import java.util.*;
import java.math.*;

public class euler20{
	public static void main(String[] args){
		BigInteger a = BigInteger.valueOf(1);
		for (int i = 1; i <= 100; i ++){
			a = a.multiply(BigInteger.valueOf(i));
		}
		int sum = 0;
		while (a.compareTo(BigInteger.ZERO) > 0){
			sum += a.mod(BigInteger.valueOf(10)).intValue();
			a = a.divide(BigInteger.valueOf(10));
		}
		System.out.println(sum);
	}
}