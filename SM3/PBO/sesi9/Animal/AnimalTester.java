//superclass
class Animal {
    //properti
    String name;

    //konstruktor
    public Animal(String name) {
        this.name = name;
    }

    //metode
    public void speak() {
        System.out.println("Animal speaks");
    }
}

//subclass
class Dog extends Animal {
    //konstruktor
    public Dog(String name) {
        super(name);
    }

    //metode
    @Override
    public void speak() {
        System.out.println(name + "Dog barks");
    }
}

public class AnimalTester {
    public static void main(String[] args) {
        Dog dog = new Dog("Beethoven");
        dog.speak();
    }
}