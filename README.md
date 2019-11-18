# laser-security-alarm-
Laser based Security System is a type of security and alarm system that uses laser light and a light sensor. A security system protects our homes, offices, banks, lockers etc. from intrusion and unauthorised access. It makes some sound or noise when it detects any irregular activity.

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
