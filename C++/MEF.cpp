// Define los pines de entrada y salida
const int buttonPin = 9;
const int ledPin1 = 10;
const int ledPin2 = 11;

// Define los estados de la MEF
typedef enum {
  BUTTON_UP,
  BUTTON_FALLING,
  BUTTON_DOWN,
  BUTTON_RAISING,
} debounceState_t;

// Variables de estado y temporizadores
debounceState_t debounceState = BUTTON_UP;
unsigned long debounceTimer = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  // Inicialización de la MEF
  debounceFSM_init();
}

void loop() {
  // Actualiza la MEF de anti-rebote
  debounceFSM_update();

  // Tu código principal aquí
}

// Inicializa la MEF de anti-rebote
void debounceFSM_init() {
  debounceState = BUTTON_UP;
}

// Actualiza la MEF de anti-rebote
void debounceFSM_update() {
  switch (debounceState) {
    case BUTTON_UP:
      if (digitalRead(buttonPin) == LOW) {
        debounceState = BUTTON_FALLING;
        debounceTimer = millis();
      }
      break;

    case BUTTON_FALLING:
      if (digitalRead(buttonPin) == HIGH) {
        debounceState = BUTTON_UP;
      } else if (millis() - debounceTimer >= 40) {
        debounceState = BUTTON_DOWN;
        buttonPressed();
      }
      break;

    case BUTTON_DOWN:
      if (digitalRead(buttonPin) == HIGH) {
        debounceState = BUTTON_RAISING;
        debounceTimer = millis();
      }
      break;

    case BUTTON_RAISING:
      if (digitalRead(buttonPin) == LOW) {
        debounceState = BUTTON_DOWN;
      } else if (millis() - debounceTimer >= 40) {
        debounceState = BUTTON_UP;
        buttonReleased();
      }
      break;
  }
}

// Función llamada cuando el botón es presionado
void buttonPressed() {
  digitalWrite(ledPin1, !digitalRead(ledPin1));
}

// Función llamada cuando el botón es liberado
void buttonReleased() {
  digitalWrite(ledPin2, !digitalRead(ledPin2));
}
