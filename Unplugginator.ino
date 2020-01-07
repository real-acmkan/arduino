#include "TMRpcm.h"
#include "SD.h"
#include "SPI.h"
#define SD_Pin 10

TMRpcm tmrpcm;

int pwm = 7;
int in_1 = 8;
int in_2 = 5;

void setup() {
  tmrpcm.speakerPin = 9;
  Serial.begin(9600);
  if (!SD.begin(SD_Pin)) {
    Serial.println("SD Failed to load");
    return;
  }
  tmrpcm.setVolume(6);
  //play();
  tmrpcm.play("1.wav");
  pinMode(pwm, OUTPUT);
  pinMode(in_1, OUTPUT);
  pinMode(in_2, OUTPUT);
  // turn it off
  digitalWrite(in_1, LOW);
  digitalWrite(pwm, LOW);
}

void loop() {
  // set max speed
  analogWrite(in_2, 255);
  // Turn on motor A & B
  digitalWrite(in_1, HIGH);
  digitalWrite(pwm, LOW);
  //die
}
