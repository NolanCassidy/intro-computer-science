
public class SimpleCalculatorCalling
{
	public static void main(String[] args)
   {
      SimpleCalculator calc = new SimpleCalculator();

      calc.Add(3.5, 4.2);
      calc.Add(2.45, 7.1, 3.6);

      System.out.println();

      calc.Multiply(1.9, 8.4);
      calc.Multiply(3.8, 2.57, 4.6);
   }
}
