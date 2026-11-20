public class SimpleCalculate implements Calculate {

  @Override
  public int add_two_integers(int a, int b) {
    return a + b;  
  }

  // SNIPPET_START subtract_two_integers
  @Override
  public int subtract_two_integers(int a, int b) {
    return a - b;
  }
  // SNIPPET_END subtract_two_integers

  @Override
  public int multiply_two_integers(int a, int b) {
    return a * b;  
  }

  @Override
  public int divide_two_integers(int a, int b) {
    return a / b;
  }
}
