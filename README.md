# laser-security-alarm-
Laser based Security System is a type of security and alarm system that uses laser light and a light sensor. A security system protects our homes, offices, banks, lockers etc. from intrusion and unauthorised access. It makes some sound or noise when it detects any irregular activity.

### Working:

   This system for security uses the combination of LASER light and LDR. The LDR module has an onboard potentiometer to adjust the sensitivity of LDR, so that it only senses laser light falling onto it. The concept is quite simple and similar to what we see in movies where antique, priceless ornaments are protected under laser lights. As someone crosses these lights, an alarm runs on to indicate unauthorised presence. This project works similarly. In normal conditions, where there is always laser light falling on the LDR, the LDR module always gives a high signal to microcontroller. When someone crosses this laser light, it will behave as an obstruction between the LDR module and laser light, resulting in no light falling on LDR. In such cases LDR module gives a low signal to the microcontroller, which indicates it to switch on an alarm


### Code:

```int buzzer = 8;
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
```
### Circuit Diagram:
![alt text](https://github.com/jaysuthar743/laser-security-alarm-/blob/master/Funky%20Snaget-Tumelo.png)
