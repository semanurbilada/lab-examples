// Week 7: Final keyword example

public  class A {

    void getMethod() {
        System.out.println("\nMost general one! (main)\n");
    }

    public static void main(String[] args) {
        
        A obj = new A();
        obj.getMethod();
    }
}