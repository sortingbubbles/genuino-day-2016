int red = 13; //κόκκινο φωτάκι στο pin 13
int yellow = 12; //κίτρινο φωτάκι στο pin 12
int green = 11; //πράσινο φωτάκι στο pin 11
int button = 2; //κουμπί στο pin 2
int buttonValue = LOW; //αρχική τιμή στο κουμπί 0 - δεν είναι πατημένο
void setup(){
	pinMode(red,OUTPUT);//κατάσταση εξόδου για το κόκκινο φωτάκι
	pinMode(yellow,OUTPUT);//κατάσταση εξόδου για το κίτρινο φωτάκι
	pinMode(green,OUTPUT);//κατάσταση εξόδου για το πράσινο φωτάκι
	pinMode(button,INPUT);//κατάσταση εισόδου για το κουμπί
	digitalWrite(green,HIGH);//άναψε το πράσινο φωτάκι
}

void loop(){
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
