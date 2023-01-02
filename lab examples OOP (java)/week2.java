/* 
* Create a simple class with three properties and two methods. 
* Download Oracle JDK and configure it.
* Then compile and test your code through command promt.
* Take a picture of your result screen and your source code with your student card.
*/


class Main {
  static void try1(String language1, String language2 ) {
    System.out.println("\nI'm trying to run " + language1);
    System.out.println("I ran " + language2 + " before...");
    System.out.println("---------------------------------");
  }
  
  static double try2(double a, double b) {
    System.out.println("Trying different methods like plus method:");
    return a + b;
  } 
  
  public static void main(String[] args) {
    try1("Java!", "Python");

    double plus = try2(9.45, 34.5);
    System.out.println("9.45 + 34.5 = " + plus);
    System.out.println("------------------------------------------");
  }
}
