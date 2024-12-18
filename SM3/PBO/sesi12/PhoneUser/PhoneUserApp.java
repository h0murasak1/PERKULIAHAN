package SM3.PBO.sesi12.PhoneUser;

// Interface Phone
interface Phone {
    int MAX_VOLUME = 100;
    int MIN_VOLUME = 0;

    void powerOn();
    void powerOff();
    void volumeUp();
    void volumeDown();
}

// Class Xiaomi
class Xiaomi implements Phone {
    private int volume;
    private boolean isPowerOn;

    public Xiaomi() {
        this.volume = 50; // Default volume
        this.isPowerOn = false;
    }

    @Override
    public void powerOn() {
        isPowerOn = true;
        System.out.println("Xiaomi is ON");
    }

    @Override
    public void powerOff() {
        isPowerOn = false;
        System.out.println("Xiaomi is OFF");
    }

    @Override
    public void volumeUp() {
        if (isPowerOn) {
            if (volume < MAX_VOLUME) {
                volume++;
            }
            System.out.println("Xiaomi Volume: " + volume);
        } else {
            System.out.println("Turn ON the phone first!");
        }
    }

    @Override
    public void volumeDown() {
        if (isPowerOn) {
            if (volume > MIN_VOLUME) {
                volume--;
            }
            System.out.println("Xiaomi Volume: " + volume);
        } else {
            System.out.println("Turn ON the phone first!");
        }
    }

    public int getVolume() {
        return volume;
    }
}

// Class iPhone
class iPhone implements Phone {
    private int volume;
    private boolean isPowerOn;

    public iPhone() {
        this.volume = 50; // Default volume
        this.isPowerOn = false;
    }

    @Override
    public void powerOn() {
        isPowerOn = true;
        System.out.println("iPhone is ON");
    }

    @Override
    public void powerOff() {
        isPowerOn = false;
        System.out.println("iPhone is OFF");
    }

    @Override
    public void volumeUp() {
        if (isPowerOn) {
            if (volume < MAX_VOLUME) {
                volume++;
            }
            System.out.println("iPhone Volume: " + volume);
        } else {
            System.out.println("Turn ON the phone first!");
        }
    }

    @Override
    public void volumeDown() {
        if (isPowerOn) {
            if (volume > MIN_VOLUME) {
                volume--;
            }
            System.out.println("iPhone Volume: " + volume);
        } else {
            System.out.println("Turn ON the phone first!");
        }
    }

    public int getVolume() {
        return volume;
    }
}

// Class Samsung
class Samsung implements Phone {
    private int volume;
    private boolean isPowerOn;

    public Samsung() {
        this.volume = 50; // Default volume
        this.isPowerOn = false;
    }

    @Override
    public void powerOn() {
        isPowerOn = true;
        System.out.println("Samsung is ON");
    }

    @Override
    public void powerOff() {
        isPowerOn = false;
        System.out.println("Samsung is OFF");
    }

    @Override
    public void volumeUp() {
        if (isPowerOn) {
            if (volume < MAX_VOLUME) {
                volume++;
            }
            System.out.println("Samsung Volume: " + volume);
        } else {
            System.out.println("Turn ON the phone first!");
        }
    }

    @Override
    public void volumeDown() {
        if (isPowerOn) {
            if (volume > MIN_VOLUME) {
                volume--;
            }
            System.out.println("Samsung Volume: " + volume);
        } else {
            System.out.println("Turn ON the phone first!");
        }
    }

    public int getVolume() {
        return volume;
    }
}

// Class Oppo
class Oppo implements Phone {
    private int volume;
    private boolean isPowerOn;

    public Oppo() {
        this.volume = 50; // Default volume
        this.isPowerOn = false;
    }

    @Override
    public void powerOn() {
        isPowerOn = true;
        System.out.println("Oppo is ON");
    }

    @Override
    public void powerOff() {
        isPowerOn = false;
        System.out.println("Oppo is OFF");
    }

    @Override
    public void volumeUp() {
        if (isPowerOn) {
            if (volume < MAX_VOLUME) {
                volume++;
            }
            System.out.println("Oppo Volume: " + volume);
        } else {
            System.out.println("Turn ON the phone first!");
        }
    }

    @Override
    public void volumeDown() {
        if (isPowerOn) {
            if (volume > MIN_VOLUME) {
                volume--;
            }
            System.out.println("Oppo Volume: " + volume);
        } else {
            System.out.println("Turn ON the phone first!");
        }
    }

    public int getVolume() {
        return volume;
    }
}

// Class PhoneUser
class PhoneUser {
    private Phone phone;

    public PhoneUser(Phone phone) {
        this.phone = phone;
    }

    public void turnOnThePhone() {
        phone.powerOn();
    }

    public void turnOffThePhone() {
        phone.powerOff();
    }

    public void makePhoneLouder() {
        phone.volumeUp();
    }

    public void makePhoneSilent() {
        phone.volumeDown();
    }
}

// Main Class
public class PhoneUserApp {
    public static void main(String[] args) {
        Phone xiaomi = new Xiaomi();
        Phone iphone = new iPhone();
        Phone samsung = new Samsung();
        Phone oppo = new Oppo();

        PhoneUser user1 = new PhoneUser(xiaomi);
        PhoneUser user2 = new PhoneUser(iphone);
        PhoneUser user3 = new PhoneUser(samsung);
        PhoneUser user4 = new PhoneUser(oppo);

        System.out.println("=== Testing Xiaomi ===");
        user1.turnOnThePhone();
        user1.makePhoneLouder();
        user1.makePhoneSilent();
        user1.turnOffThePhone();

        System.out.println("\n=== Testing iPhone ===");
        user2.turnOnThePhone();
        user2.makePhoneLouder();
        user2.makePhoneSilent();
        user2.turnOffThePhone();

        System.out.println("\n=== Testing Samsung ===");
        user3.turnOnThePhone();
        user3.makePhoneLouder();
        user3.makePhoneSilent();
        user3.turnOffThePhone();

        System.out.println("\n=== Testing Oppo ===");
        user4.turnOnThePhone();
        user4.makePhoneLouder();
        user4.makePhoneSilent();
        user4.turnOffThePhone();
    }
}
