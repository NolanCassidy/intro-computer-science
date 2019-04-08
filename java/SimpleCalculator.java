
public class SimpleCalculator
{
	double num1, num2, num3;
	
	public SimpleCalculator(double num1call, double num2call, double num3call)
	{
		num1 = num1call;
		num2 = num2call;
		num3 = num3call;
	}
	
	public void Add(double num1call, double num2call)
	{
		System.out.println("The sum of " + num1call + " and " + num2call + " is " + (num1call + num2call) + ".");
	}

	public void Add(double num1call, double num2call, double num3call)
	{
		System.out.println("The sum of " + num1call + " and " + num2call + " and " + num3call + " is " + (num1call + num2call + num3call) + ".");
	}

	public void Multiply(double num1call, double num2call)
	{
		System.out.println("The product of " + num1call + " and " + num2call + " is " + (num1call * num2call) + ".");
	}

	public void Multiply(double num1call, double num2call, double num3call)
	{
		System.out.println("The product of " + num1call + " and " + num2call + " and " + num3call + " is " + (num1call * num2call * num3call) + ".");
	}
	
}
