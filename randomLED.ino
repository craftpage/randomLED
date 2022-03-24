void setup() {
    pinMode( 13, OUTPUT );
    pinMode( 12, OUTPUT );
    pinMode( 11, OUTPUT );
    pinMode( 10, OUTPUT );
    pinMode( 9, OUTPUT );
    pinMode( 8, OUTPUT );
}
int i = 0; 
void loop() {
  int r[] = {1,0,1,0,1,0,1,1,0,1,1,1,0,1,0,1,1,1,0,1,1,0,1,1,0};

  if(r[i] == 1){
    digitalWrite( 13,  HIGH);
    digitalWrite( 11,  HIGH);
    digitalWrite( 9,  HIGH);
  }
  delay(100);
  i++;
  if(r[i] == 1){
    digitalWrite( 13,  LOW);
    digitalWrite( 11,  HIGH);
    digitalWrite( 9,  HIGH);
  }
  delay(100);
  i++;
  if(r[i] == 1){
    digitalWrite( 13,  LOW);
    digitalWrite( 11,  LOW);
    digitalWrite( 9,  HIGH);
  }
  delay(100);
  i++;
  if(r[i] == 1){
    digitalWrite( 13,  HIGH);
    digitalWrite( 11,  LOW);
    digitalWrite( 9,  HIGH);
  }
  delay(100);
  i++;
  if(r[i] == 1){
    digitalWrite( 13,  HIGH);
    digitalWrite( 11,  HIGH);
    digitalWrite( 9,  LOW);
  }
  delay(100);
  i++;
  if(r[i] == 1){
    digitalWrite( 13,  LOW);
    digitalWrite( 11,  LOW);
    digitalWrite( 9,  LOW);
  }
  delay(100);
  i++;


 if(r[i] == 1){
    digitalWrite( 12,  HIGH);
    digitalWrite( 10,  HIGH);
    digitalWrite( 8,  HIGH);
  }
  delay(100);
  i++;
  if(r[i] == 1){
    digitalWrite( 12,  LOW);
    digitalWrite( 10,  HIGH);
    digitalWrite( 8,  HIGH);
  }
  delay(100);
  i++;
  if(r[i] == 1){
    digitalWrite( 12,  LOW);
    digitalWrite( 10,  LOW);
    digitalWrite( 8,  HIGH);
  }
  delay(100);
  i++;
  if(r[i] == 1){
    digitalWrite( 12,  HIGH);
    digitalWrite( 10,  LOW);
    digitalWrite( 8,  HIGH);
  }
  delay(100);
  i++;
  if(r[i] == 1){
    digitalWrite( 12,  HIGH);
    digitalWrite( 10,  HIGH);
    digitalWrite( 8,  LOW);
  }
  delay(100);
  i++;
  if(r[i] == 1){
    digitalWrite( 12,  LOW);
    digitalWrite( 10,  LOW);
    digitalWrite( 8,  LOW);
  }
  delay(100);
  i++;
  if(i == 24){
    i = 0;
  }
}
