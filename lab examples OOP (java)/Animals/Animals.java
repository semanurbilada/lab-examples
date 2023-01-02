/* 
- Activity 12, Creating a Simple Class in Java
- From the Java Fundementals book (week 3)
*/

class Main {
    public static void main(String[] args) {
        //creating objects;
        Animal jaguar = new Animal();
        Animal cheetah = new Animal();
        //parameterized;
        Animal filamingo = new Animal(2, 2, 2);

        //compelete of setters;
        jaguar.setName("Jaguar");
        cheetah.setName("Cheetah");
        filamingo.setName("Filamingo");

        jaguar.setFamily("Felines");
        cheetah.setFamily("Felines");
        filamingo.setFamily("Filamingos");

        //complete of getters, printing the results;
        System.out.println("\n- A constructor with no parameters:");
        System.out.println("* Names of animals are " + jaguar.getName() + " and " + cheetah.getName() + ".");
        System.out.println("* And, the family of animals is " + jaguar.getFamily() + ".");
        System.out.println("* These animals has 4 legs, 2 ears and 2 eyes.");

        System.out.println("\n- A constructor with parameterized:");
        System.out.println("* Animal's name is " + filamingo.getName() + ".");
        System.out.println("* The family of this animal is " + filamingo.getFamily() + ".");
        System.out.println("* But, this animal has 2 legs, 2 ears and 2 eyes.\n");
    }
}
