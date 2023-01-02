// error; cannot override the final method from C
// solution; remove the final keyword from C.java's void getMethod().

/*
* The purpose of this example is;
- we have to see when we add the final keyword to the C,
- we cannot compile F class from C getMethod().
*/ 

public class F extends C {
    
    void getMethod() {
       System.out.println("\nF extends second term! (C)\n");
    }

    public static void main(String[] args) {
        
        F obj = new F();
        obj.getMethod();
    }
}