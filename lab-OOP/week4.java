/* 
Example; interfaces 
*/

public class week4 {
    public static void main(String[] args) {
        DemoClass mySection = new DemoClass();
        mySection.myTry();
        mySection.mySecondTry();
    }
}

// TryInt.java
interface TryInt extends SecondInt{
    public void myTry();
}

// SecondInt.java
interface SecondInt{
    public void mySecondTry();
}

// DemoClass.java
class DemoClass implements SecondInt{
    public void myTry() {
        System.out.println("\nThis is a try for interface in Java!");
    }

    public void mySecondTry() {
        System.out.println("And, this is my second try!\n");
    }
}
