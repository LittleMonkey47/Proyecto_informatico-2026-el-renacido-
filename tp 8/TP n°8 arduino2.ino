
#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_B4 494
#define NOTE_C5 523
const int TEMPO = 120;
const int BUZZER = 2;
const int notas[] = {NOTE_C4, NOTE_C4, NOTE_E4, NOTE_C4, NOTE_D4, NOTE_D4, NOTE_F4, NOTE_D4, NOTE_C4, 0, NOTE_E4, NOTE_E4, NOTE_G4, NOTE_E4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_B4, NOTE_G4, 0, NOTE_C4, NOTE_E4, NOTE_F4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_C4, NOTE_B4, 0, NOTE_E4, NOTE_G4, NOTE_E4, NOTE_F4, NOTE_E4, NOTE_C4, NOTE_B4, NOTE_C4, NOTE_E4, 0};
const int figuras[] = {8, 8, 8, 16, 8, 8, 8, 16, 8, -16, 8, 8, 8, 8, 8, 16, 8, 8, 8, -16, 8, 8, 8, 8, 8, 16, 8, 8, 8, -16, 8, 8, 8, 8, 8, 16, 8, 8, 8, -16};

void playNote(int note, int duration) {
  if (note == 0) {
    noTone(BUZZER);
    delay(duration);
  } else {
    tone(BUZZER, note);
    delay(duration);
    noTone(BUZZER);
  }
}

int cuadritosToDuration(int cuadritos) {
  int figura = cuadritos;

  if (figura < 0) {
    figura = -figura;
  }

  int duracionRedonda = (60000 * 4) / TEMPO;
  return duracionRedonda / (figura / 2);
}

void playMelody(const int notes[], const int figures[], int length) {
  for (int i = 0; i < length; i++) {
    int duration = cuadritosToDuration(figures[i]);
    playNote(notes[i], duration);
  }
}

void pauseBetweenLoops(int seconds) {
  delay(seconds * 1000);
}

void setup() {
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  playMelody(notas, figuras, sizeof(notas) / sizeof(notas[0]));
  pauseBetweenLoops(3);
}
