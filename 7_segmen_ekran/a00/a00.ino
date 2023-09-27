
int pinler[7] = {2,3,4,5,6,7,8};
int i = 0;

void setup()
{
  while (i < 7)
  {
    pinMode(pinler[i], 1);
    i++;

  }

}

void loop()
{
  i = 0;
  while (i < 7)
  {
    digitalWrite(pinler[i], 1);
    i++;
  }

  delay(400);

  while (i > -1)
  {
    digitalWrite(pinler[i], 0);
    i--;
  }
  delay(400);


}