// Nolan Cassidy
// Redwood High School
// Computer Programming 2
// 2/4/14
// MarbleBank.Java

public class MarbleBank
{
	private int numMarbles;

	public MarbleBank()
	{
		numMarbles = 0;
	}

	public MarbleBank(int startMarbles)
	{
		numMarbles = startMarbles;
	}

	public int CountMarbles()
	{
		return numMarbles;
	}

	public void AddMarbles(int add)
	{
		numMarbles = numMarbles + add;
	}

	public void EmptyBank()
	{
		numMarbles = 0;
	}

}
