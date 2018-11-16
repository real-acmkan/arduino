/*
Simple RF Send Sketch Created by @real_acmkan
Copyright(c) real_acmkan
*/

#include <VirtualWire.h>


void setup() {
  vw_setup(2000); // Initialize the IO and ISR, also set the Bits per second
  // This just prepares the device and displays "Device ready"

}

void loop() {
  const char *msg = "Hello";
  vw_send((uint8_t *)msg, strlen(msg)); // Transmit message
  vw_wait_tx(); // Wait until the whole message is gone otherwise things get messy
  delay(1000);
  
}
