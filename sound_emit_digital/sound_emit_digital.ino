/*

Digital sound emit sensor 

Basic Components Needed:
    Arduino (Uno, Nano, etc.)
    Sound Sensor Module (e.g., KY-038 or LM393 Sound Detection Module)
    Jumper Wires
    Breadboard (optional)

Sound Sensor Pinout:
    VCC → Connect to 5V on the Arduino.
    GND → Connect to GND on the Arduino.
    A0 (Analog Output) → Connect to an Analog Pin on Arduino (e.g., A0).
    D0 (Digital Output) → Connect to a Digital Pin on Arduino (e.g., Pin 8).

***
Using the Analog Output (For Sound Intensity):
You can use the analog output to read varying levels of sound intensity. 
Here’s an example code to read the analog output from the sound sensor 
and display the result in the Serial Monitor.
***
  
  
*/

// Code Example (Digital Output):

const int soundPin = 8;  // Sound sensor connected to Digital Pin 8
int soundState = 0;      // Variable to store the sound event state

void setup() {
  pinMode(soundPin, INPUT);  // Set the sound pin as an input
  Serial.begin(9600);        // Initialize Serial Monitor
}

void loop() {
  soundState = digitalRead(soundPin);  // Read the digital output from the sound sensor

  if (soundState == HIGH) {  // If sound detected
    Serial.println("Sound detected!");
  } else {
    Serial.println("No sound detected.");
  }

  delay(500);  // Short delay to avoid flooding the Serial Monitor
}
