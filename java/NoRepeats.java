import java.util.Scanner;

public class NoRepeats
{
	private static Scanner input = new Scanner(System.in);
	private static int i = 0;
	private static final int MAX_WORDS = 10;
	private static String[] words = new String[MAX_WORDS];
	private static String word = "";

	public static void main(String[] args)
	{
		GetWords();
	}

	public static void GetWords()
	{
		while (i < MAX_WORDS)
		{
			System.out.print("Enter a word: ");
			word = input.nextLine();

			if (word.length() != 0)
			{
				words[i] = word.trim();
				i++;
			}
			else
				break;
		}
		Duplicates();
	}

	public static void Duplicates()
	{
		for (int b = 0; b < MAX_WORDS - 1; b++)
		{
			for (int c = b + 1; c < MAX_WORDS; c++)
			{
				if (words[b] != null && words[b].equals(words[c]))
					words[c] = null;
			}
		}
		Display();
	}

	public static void Display()
	{
		for (int b = 0; b < i; b++)
		{
			if (words[b] != null)
				System.out.println(words[b]);
		}
	}
}
