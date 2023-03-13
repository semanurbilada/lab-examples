/*
void getMethod() {
    (...)
} 
*/

public class C extends A {

    final void getMethod() {
       System.out.println("\nSecond Term!\n");
    }

    public static void main(String[] args) {
        
        C obj = new C();
        obj.getMethod();
    }
}