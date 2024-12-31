// Welcome to Aviyan's Thoughts

#define BUZZER D0 // connect signal pin of buzzer to D0 or GPIO16 of NodeMCU

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 0 as an output.
  pinMode(BUZZER, OUTPUT); 
}

// the loop function runs over and over again forever
void loop() {
  // switching buzzer on and off rapidly
  digitalWrite(BUZZER, HIGH); //turn on the buzzer
  delay(100);
  digitalWrite(BUZZER, LOW);  //turn off the buzzer
  delay(100);
}
