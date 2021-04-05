void setup() {
  Serial.begin(9600);

  pinMode(2, 1);
  pinMode(3, 1);
  pinMode(4, 1);
  pinMode(5, 1);
  
  pinMode(7, 0);
  pinMode(8, 0);
  pinMode(9, 0);
  pinMode(10, 0);
}

int a, n;

int f()
{
  while (1)
  {
    n = 7;
    while (n < 11)
    {
      if (digitalRead(n) == 1)
      {
        if (n == a + 5)
        {
          digitalWrite(2, 0);
          digitalWrite(3, 0);
          digitalWrite(4, 0);
          digitalWrite(5, 0);
          Serial.println("exit");
          delay(1000);
          return 0;
        }
      }
      n = n + 1;
    }
  }
}

void loop() {

  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);

  a = random(2, 6);

  Serial.println(a);
  digitalWrite(a, 1);

  f();
}
