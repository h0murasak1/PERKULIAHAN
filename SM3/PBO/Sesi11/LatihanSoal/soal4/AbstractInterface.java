package SM3.PBO.Sesi11.LatihanSoal.soal4;
// Program Java menggunakan Abstract dan Interface

// Abstract Class
abstract class Animal {
    private String name;

    public Animal(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public abstract void makeSound();
}

// Interface
interface Pet {
    void play();
}

// Kelas konkret yang mewarisi Animal dan mengimplementasi Pet
class Dog extends Animal implements Pet {
    public Dog(String name) {
        super(name);
    }

    @Override
    public void makeSound() {
        System.out.println(getName() + " says: Woof Woof!");
    }

    @Override
    public void play() {
        System.out.println(getName() + " loves to play fetch.");
    }
}

class Cat extends Animal implements Pet {
    public Cat(String name) {
        super(name);
    }

    @Override
    public void makeSound() {
        System.out.println(getName() + " says: Meow Meow!");
    }

    @Override
    public void play() {
        System.out.println(getName() + " enjoys chasing lasers.");
    }
}

// Main Class
public class AbstractInterface {
    public static void main(String[] args) {
        // Membuat objek Dog
        Dog dog = new Dog("Buddy");
        dog.makeSound();
        dog.play();
        System.out.println("====================================");

        // Membuat objek Cat
        Cat cat = new Cat("Whiskers");
        cat.makeSound();
        cat.play();
        System.out.println("====================================");
    }
}
