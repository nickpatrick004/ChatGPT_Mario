/*
  Mario Bros Theme Song for Piezo Buzzer
  Author: ChatGPT
*/

#include "pitches.h"

// Notes of the melody, corresponding to the Mario Bros theme song
int melody[] = {
  NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0,
  NOTE_G6, 0, 0, 0,
  
  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
  
  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,
  
  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
  
  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0
};

// Note durations: 4 = quarter note, 8 = eighth note, etc.
int noteDurations[] = {
  12, 12, 12, 12,
  12, 12, 12, 12,
  8, 16, 16, 16,
  8, 16, 16, 16,
  
  12, 12, 12, 12,
  12, 12, 12, 12,
  8, 16, 16, 16,
  8, 16, 16, 16,
  
  12, 12, 12, 12,
  12, 12, 12, 12,
  8, 16, 16, 16,
  8, 16, 16, 16,
  
  12, 12, 12, 12,
  12, 12, 12, 12,
  8, 16, 16, 16,
  8, 16, 16, 16,
  
  12, 12, 12, 12,
  12, 12, 12, 12,
  8, 16, 16, 16,
  8, 16, 16, 16
};

void setup() {
  // Iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < sizeof(melody) / sizeof(melody[0]); thisNote++) {

    // Calculate the note duration: 1000 ms divided by the note type.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(10, melody[thisNote], noteDuration); // Use pin 10 for the buzzer

    // To distinguish the notes, set a minimum time between them.
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);

    // Stop the tone playing:
    noTone(10);
  }
}

void loop() {
  // No need to repeat the melody.
}
