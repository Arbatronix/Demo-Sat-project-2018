int threshold = 300;//I have no idea what the actual threshold will be, play around with some values and see what works best
int photoResistor;//value read by photoresistor
String light_status[2];//written as on or off
boolean on_status, off_status = false;
boolean status_change = true;

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  photoResistor = analogRead(A0);
  Serial.println(photoResistor);
  if (photoResistor >= threshold) {
    digitalWrite(13, LOW);
    light_status[0] = "bright";
    off_status = true;
    if (on_status == true) {
      status_change = true;
      on_status = false;
    }
  }

  else {
    digitalWrite(13, HIGH);
    light_status[0] = "dark";
    light_status[1] = "on";
    on_status == true;
    if (off_status = true) {
      status_change = true;
      off_status = false;

    }
  }
  if (status_change == true) {
    Serial.println("The room brightness is currently " + light_status[0] + ". The LED is turned " + light_status[1] + ".");
  }

  status_change = false;
}
