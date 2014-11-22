import java.io.*;
import java.util.*;
import java.math.*;

public class euler16{
	public static void main(String[] args){
		BigInteger a = BigInteger.valueOf(1);
		for (int i = 0; i < 1000; i ++){
			a = a.multiply(BigInteger.valueOf(2));
		}
		String s = a.toString();
		System.out.println(s);
	}
}