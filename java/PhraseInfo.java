// Nolan Cassidy
// Redwood High School
// Computer Programming 2
// 1/27/14
// PhraseInfo.Java

import java.util.Scanner;

public class PhraseInfo
{

	public static void main(String[] args)
	{
		int spaces = 0, nonSpaces = 0, count = 0;
		String sentence = "", reverseSentence = "";
		char character = ' ';

		GetSentence(spaces, nonSpaces, count, sentence, reverseSentence, character);
	}

	public static void GetSentence(int spaces, int nonSpaces, int count, String sentence, String reverseSentence,
				char character)
	{
		Scanner input = new Scanner(System.in);

		System.out.print("Enter a sentence: ");
		sentence = input.nextLine();

		sentence = sentence.trim().toUpperCase();
		count = sentence.length() - 1;

		do
		{
			character = sentence.charAt(count);

			if (character == ' ')
				spaces++;
			else
				nonSpaces++;

			reverseSentence = reverseSentence + character;

			count--;
		} while (count >= 0);

		DisplayData(spaces, nonSpaces, reverseSentence);

	}

	public static void DisplayData(int spaces, int nonSpaces, String reverseSentence)
	{
		System.out.println("Your sentence reversed and in caps is:");
		System.out.println(reverseSentence);
		System.out.println("and has " + spaces + " spaces and " + nonSpaces + " nonspaces.");
	}
}
