
public class Main {
	private static int n = 1;
	
	public static void main(String[] args)
	{
		String filename = "t" + n + ".log";
		n = (n+1)%3==0?3:(n+1)%3;
		System.out.println("write to file: " + filename + " " + n );
	}
}
