import java.util.*;
public class Solution {


	public static void main(String[] args) {
		
		/* Your class should be named Solution.
	 	* Read input as specified in the question.
	 	* Print output as specified in the question.
		*/

		Scanner sc =new Scanner(System.in);
		int n = sc.nextInt();
		if(n<2)
		{
		System.out.print("1");
		return;
		}
        int last = 1;
		int previous = 1;
		int fib = 0;
		for(int i=3;i<=n;i++)
		{
             fib = last+previous;
			 last=previous;
			 previous=fib;
		}
		
		System.out.print(fib);
		
	}

}
