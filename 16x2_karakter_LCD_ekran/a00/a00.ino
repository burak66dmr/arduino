#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
    // LCD ekranın satır ve sütünlarını tanımlamalıyız
    lcd.begin(16, 2);
    lcd.print("risale-i nur");
}

void loop()
{
    // imlec konumu
    lcd.setCursor(0, 1);
    delay(10);
}