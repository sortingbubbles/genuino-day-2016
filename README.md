# Παγκόσμια Ημέρα Genuino/Arduino 2016
## Επιχείρηση Σηματοδότης

Θα γιορτάσουμε τη σημερινή μέρα με μία εργασία!

### Τι θα χρειαστούμε
- 1 μικροελεγκτή (arduino, genuino, κτλ)
- 1 κόκκινο LED φωτάκι
- 1 κίτρινο LED φωτάκι
- 1 πράσινο LED φωτάκι
- 3 αντιστάσεις 220 ohm
- 1 αντίσταση 10k ohm
- 1 κουμπί
- 1 πλακέτα (breadboard)
- αρκετά καλώδια
- 1 υπολογιστή

### Συνδεσμολογία
![alt text]( "Εικόνα Πλακέτας")

### Κώδικας
```c
int red = 13; //κόκκινο φωτάκι στο pin 13
int yellow = 12; //κίτρινο φωτάκι στο pin 12
int green = 11; //πράσινο φωτάκι στο pin 11
int button = 2; //κουμπί στο pin 2
int buttonValue = LOW; //αρχική τιμή στο κουμπί 0 - δεν είναι πατημένο
void setup()
{
	pinMode(red,OUTPUT);//κατάσταση εξόδου για το κόκκινο φωτάκι
	pinMode(yellow,OUTPUT);//κατάσταση εξόδου για το κίτρινο φωτάκι
	pinMode(green,OUTPUT);//κατάσταση εξόδου για το πράσινο φωτάκι
	pinMode(button,INPUT);//κατάσταση εισόδου για το κουμπί
	digitalWrite(green,HIGH);//άναψε το πράσινο φωτάκι
}

void loop()
{
	buttonValue = digitalRead(button);//έλεγχος κατάστασης κουμπιού
	
	//εάν το κουμπί είναι πατημένο
	if (buttonValue == HIGH){
		changeLights();//άλλαξε τα φώτα!
		delay(2000); //καθυστέρηση μερικών δευτερολέπτων
	}
}

void changeLights(){
	delay(1000);//καθυστέρηση μερικών δευτερολέπτων
	digitalWrite(green,LOW);//σβήσε το πράσινο φωτάκι
	digitalWrite(yellow,HIGH);//άναψε το κίτρινο φωτάκι
	delay(3000);//καθυστέρηση μερικών δευτερολέπτων

	digitalWrite(red,HIGH);//άναψε το κόκκινο φωτάκι
	delay(3000);//καθυστέρηση μερικών δευτερολέπτων
	
	digitalWrite(yellow,LOW);//σβήσε το κίτρινο φωτάκι
	delay(4000);//καθυστέρηση μερικών δευτερολέπτων
	
	digitalWrite(red,LOW);//σβήσε το κόκκινο φωτάκι
	digitalWrite(green,HIGH);//άναψε το πράσινο φωτάκι
}
```





