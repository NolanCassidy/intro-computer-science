public class MarbleBankCalling
{
	public static void main(String[] args)
	{
		MarbleBank bank1 = new MarbleBank();
		MarbleBank bank2 = new MarbleBank(25);

		System.out.println("The bank has " + bank1.CountMarbles() + " marbles.");
		bank1.AddMarbles(5);
		System.out.println("The bank has " + bank1.CountMarbles() + " marbles.");
		System.out.println("The bank has " + bank2.CountMarbles() + " marbles.");
		bank1.EmptyBank();
		System.out.println("The bank has " + bank1.CountMarbles() + " marbles.");
	}
}
