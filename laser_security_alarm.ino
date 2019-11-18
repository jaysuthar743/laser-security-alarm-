
Skip to content
Using Gmail with screen readers
Conversations
 
11.39 GB (75%) of 15 GB used
Manage
Terms · Privacy · Program Policies
Last account activity: 40 minutes ago
Details

int buzzer = 8;
int ldrvalue;
int state = 200;
void setup()
{
	Serial.begin(9600);
	pinMode(buzzer, OUTPUT);
}

void loop()
{
	ldrvalue = analogRead(A0);
	if (ldrvalue<state)
	{
		digitalWrite(buzzer, HIGH);
		Serial.println(ldrvalue);
		delay(500);
	}
	else 
	{
		digitalWrite(buzzer, LOW);
	}
}

laser security alarm.txt
Displaying laser security alarm.txt.