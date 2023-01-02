/*
public class B extends A {
    (...)
}
*/

public final class B extends A {

    void getMethod() {
       System.out.println("\nFirst term!\n");
    }

    public static void main(String[] args) {
        
        B obj = new B();
        obj.getMethod();
    }
}