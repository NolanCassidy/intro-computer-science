import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class MeanMedianRange
{
	private static Scanner input = new Scanner(System.in);
	private static int total;
	private static String inString = "";
	private static ArrayList<Integer> numbers = new ArrayList();
	
	public static void main(String[] args)
	{
		Input();
		Mean();
		Median();
		Range();
	}
	public static void Input()
	{
		for(int i=0;i==i;i++)
		{
			System.out.print("Enter an integer: ");
			inString=input.nextLine();
			if(inString.length()==0)
				break;
			else
				numbers.add(Integer.parseInt(inString));
		}
		Collections.sort(numbers);
		System.out.println();
	}
	public static void Mean()
	{
		for(int i=0;i<numbers.size();i++)
			total+=numbers.get(i);
		System.out.printf("Mean:   "+"%.2f%n",(float)total/numbers.size());
	}
	public static void Median()
	{
		if(numbers.size()%2==1)
			System.out.printf("Median: "+"%.2f%n",(float)numbers.get(numbers.size()/2));
		else
			System.out.printf("Median: "+"%.2f%n",(float)(numbers.get(numbers.size()/2)+numbers.get(numbers.size()/2-1))/2);
	}
	public static void Range()
	{
		System.out.println("Range:  "+(numbers.get(numbers.size()-1)-numbers.get(0)));
	}
}