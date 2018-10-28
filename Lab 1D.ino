int pr,pm;
int threshold = 300;
int color[3];
int redPin = 9;
int greenPin=10;
int bluePin=11;

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  pr = analogRead(A0);
  pm = analogRead(A1);
  if (pr >= threshold) {
    analogWrite(redPin, 0);
    analogWrite(bluePin, 0);
    analogWrite(greenPin, 0);
  }
  else{
    if(pm<=150){
      color[0]=255;
      color[1]=0;
      color[2]=0;
      Serial.println("RED");
      //red
    }
    
    if(pm>150 && pm <= 300){
      color[0]=255;
      color[1]=50;
      color[2]=0;
      Serial.println("ORANGE");
      //orange
    }
    
    if(pm>300 && pm <=450){
      color[0]=255;
      color[1]=255;
      color[2]=0;
      Serial.println("YELLOW");
      //yellow
    }
    
    if(pm>450 && pm<=600){
      color[0]=0;
      color[1]=255;
      color[2]=0;
      Serial.println("GREEN");
      //green
    }
    
    if(pm>600 && pm <=750){
      color[0]=0;
      color[1]=255;
      color[2]=255;
      Serial.println("CYAN");
      //cyan
    }
    
    if(pm>750 && pm<=900){
      color[0]=0;
      color[1]=0;
      color[2]=255;
      Serial.println("BLUE");
      //blue
    }
    
    if(pm>900){
      color[0]=255;
      color[1]=0;
      color[2]=255;
      Serial.println("MAGENTA");
      //magenta
    }
  }
  analogWrite(redPin,color[0]);
  analogWrite(greenPin,color[1]);
  analogWrite(bluePin,color[2]);
}
