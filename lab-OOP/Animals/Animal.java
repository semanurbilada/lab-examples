/* 
- Activity 12, Creating a Simple Class in Java
- From the Java Fundementals book (week 3)
*/

class Animal {
    String name;
    String family;
    int legs;
    int eyes;
    int ears;

    //constructor with no parameters;
    public Animal(){
        this(4, 2, 2);
    }

    //constructor with parameterized;
    public Animal(int legs, int ears, int eyes){
        this.legs = legs;
        this.ears = ears;
        this.eyes = eyes;
    }

    //getter and setter for family variable;
    public String getFamily(){
        return family;
    }
    public void setFamily(String family){
        this.family = family;
    }

    //getter and setter for name variable;
    public String getName(){
        return name;
    }
    public void setName(String name){
        this.name = name;
    }
}
