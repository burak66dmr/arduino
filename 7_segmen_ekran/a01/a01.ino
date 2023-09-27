
byte dogruluk[10][7]{{0,0,0,0,0,0,1},
                    {1,0,0,1,1,1,1},
                    {0,0,1,0,0,1,0},
                    {0,0,0,0,1,1,0},
                    {1,0,0,1,1,0,0},
                    {0,1,0,0,1,0,0},
                    {0,1,0,0,0,0,0},
                    {0,0,0,1,1,1,1},
                    {0,0,0,0,0,0,0},
                    {0,0,0,0,1,0,0}};


void setup()
{
    pinMode(2,1);
    pinMode(3,1);
    pinMode(4,1);
    pinMode(5,1);
    pinMode(6,1);
    pinMode(7,1);
    pinMode(8,1);
    pinMode(9,0);
    pinMode(10,0);
}
int sayac = 0;
int i = 2;
void loop()
{
    if (digitalRead(9) == 1)
        sayac++;
    if (digitalRead(10) == 1)
        sayac--;
    if (sayac > 9)
        sayac = 0;
    if (sayac < 0)
        sayac = 9;
    while (i <= 8)
    {
        digitalWrite(i, dogruluk[sayac][i - 2]);
        i++;
    }
    i = 2;
    delay(250);
}
