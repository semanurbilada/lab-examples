/* Example; interfaces - notifiers - API... */
import java.util.ArrayList;
import java.util.List;

class Notifier {
    protected String notifierType;
    protected User user;
    public void update() {};
}

interface Subscriber {
    public void subscribe(Notifier o) ;
    public void updateNotifiers();
} 

class User implements Subscriber {
    public String name;
    public int balance ;
    private List<Notifier> notifiers = new ArrayList();
    
    public User(String name, int balance) {
        this.name = name;
        this.balance = balance;
    }
    
    public boolean give(User other, int amount) {
        if (amount > this.balance) return false;
        
        other.balance += amount;
        this.balance -= amount;
        this.updateNotifiers();
        other.updateNotifiers();
        
        return true;
    }
    
    public void subscribe(Notifier o) {
        this.notifiers.add(o);
    }
    
    public void updateNotifiers() {
        for (Notifier ntf : this.notifiers) {
            ntf.update();
        }
    }
}


class SMSNotifier extends Notifier {
    public SMSNotifier(User user) {
        this.user = user;
        this.notifierType = "SMS";
    }
    
    public void update() {
      System.out.println("Sending "+this.notifierType+" > Dear "+this.user.name + ", Your current ballance is : " + this.user.balance);
    }
}


class EmailNotifier extends Notifier {
    public EmailNotifier(User user) {
        this.user = user;
        this.notifierType = "EMail";
    }
    
    public void update() {
        System.out.println("Sending "+this.notifierType+" > Dear "+this.user.name + ", Your current ballance is : " + this.user.balance);
    }
}


class Main {
	public static void main(String[] args) {
		User accountOne = new User("Account One", 100);
		User accountTwo = new User("Account Two", 25);
		
	    accountOne.subscribe(new SMSNotifier(accountOne));
	    accountTwo.subscribe(new SMSNotifier(accountTwo));		
	    accountOne.subscribe(new EmailNotifier(accountOne));

		accountOne.give(accountTwo, 50);
	}
}
