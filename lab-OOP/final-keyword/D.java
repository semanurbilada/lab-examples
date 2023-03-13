// error; the type D cannot subclass the final class B
// solution; remove the final keyword from B.java's public class B.

/*
* The purpose of this example is;
- we have to see when we add the final keyword to the B,
- we cannot compile D class from B class
*/ 

public class D extends B {

    void getMethod() {
       System.out.println("\nD extends first term (B)!\n");
    }

    public static void main(String[] args) {
        
        D obj = new D();
        obj.getMethod();
    }
}