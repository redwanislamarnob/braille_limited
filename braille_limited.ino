#include <Keyboard.h>

char master[] = {100, 100, 100, 100, 100, 0};
int mi = 0;

bool numflag = 0;
bool paranthesis = 0;

void setup()
{
  for (int i = 8; i < 14; i++)
  {
    pinMode(i, INPUT);
  }
  pinMode(3, INPUT);
  pinMode(2, INPUT);
  attachInterrupt(0, loaddec, CHANGE); //pin 3 // master loading
  attachInterrupt(1, key, CHANGE); //  pin 2 // printing
  attachInterrupt(2, backspace, CHANGE);  // pin 0 //backspace 
  attachInterrupt(3,enter,CHANGE); // pin 1 //enter  
  
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  
  for (int i = 8; i < 14; i++)
  {
    digitalWrite(i, HIGH);
  }
  Keyboard.begin();
}
void loop()
{
}

void loaddec()
{

  char loca = 100;
  int z = 0xFF00 ;
  for (int i = 0; i <= 5; i++)
  {
    bool x = digitalRead(i + 8);
    z = z | (x << i);
  }
  z = (~z);
  if (z == B11100000)
  {
    loca = 10;
    goto endup;
  }
  if (z == B11110000)
  {
    loca = 11;
    goto endup;
  }
  if (z == B11100100)
  {
    loca = 12;
    goto endup;
  }
  if (z == B11100110)
  {
    loca = 13;
    goto endup;
  }
  if (z == B11100010)
  {
    loca = 14;
    goto endup;
  }
  if (z == B11110100)
  {
    loca = 15;
    goto endup;
  }
  if (z == B11110110)
  {
    loca = 16;
    goto endup;
  }
  if (z == B11110010)
  {
    loca = 17;
    goto endup;
  }
  if (z == B11010100)
  {
    loca = 18;
    goto endup;
  }
  if (z == B11010110)
  {
    loca = 19;
    goto endup;
  }

  if (z == B11101000)
  {
    loca = 20;
    goto endup;
  }
  if (z == B11111000)
  {
    loca = 21;
    goto endup;
  }
  if (z == B11101100)
  {
    loca = 22;
    goto endup;
  }
  if (z == B11101110)
  {
    loca = 23;
    goto endup;
  }
  if (z == B11101010)
  {
    loca = 24;
    goto endup;
  }
  if (z == B11111100)
  {
    loca = 25;
    goto endup;
  }
  if (z == B11111110)
  {
    loca = 26;
    goto endup;
  }
  if (z == B11111010)
  {
    loca = 27;
    goto endup;
  }
  if (z == B11011100)
  {
    loca = 28;
    goto endup;
  }
  if (z == B11011110)
  {
    loca = 29;
    goto endup;
  }

  if (z == B11101001)
  {
    loca = 30;
    goto endup;
  }
  if (z == B11111001)
  {
    loca = 31;
    goto endup;
  }
  if (z == B11101101)
  {
    loca = 32;
    goto endup;
  }
  if (z == B11101111)
  {
    loca = 33;
    goto endup;
  }
  if (z == B11101011)
  {
    loca = 34;
    goto endup;
  }
  if (z == B11111101)
  {
    loca = 35;
    goto endup;
  }
  if (z == B11111111)
  {
    loca = 36;
    goto endup;
  }
  if (z == B11111011)
  {
    loca = 37;
    goto endup;
  }
  if (z == B11011101)
  {
    loca = 38;
    goto endup;
  }
  if (z == B11011111)
  {
    loca = 39;
    goto endup;
  }

  if (z == B11100001)
  {
    loca = 40;
    goto endup;
  }
  if (z == B11110001)
  {
    loca = 41;
    goto endup;
  }
  if (z == B11100101)
  {
    loca = 43;
    goto endup;
  }
  if (z == B11100011)
  {
    loca = 44;
    goto endup;
  }
  if (z == B11110101)
  {
    loca = 45;
    goto endup;
  }
  if (z == B11110111)
  {
    loca = 46;
    goto endup;
  }
  if (z == B11110011)
  {
    loca = 47;
    goto endup;
  }
  if (z == B11010101)
  {
    loca = 48;
    goto endup;
  }
  if (z == B11010111)
  {
    loca = 49;
    goto endup;
  }

  if (z == B11010000)
  {
    loca = 50;
    goto endup;
  }
  if (z == B11011000)
  {
    loca = 51;
    goto endup;
  }
  if (z == B11010010)
  {
    loca = 52;
    goto endup;
  }
  if (z == B11010011)
  {
    loca = 53;
    goto endup;
  }
  if (z == B11010001)
  {
    loca = 54;
    goto endup;
  }
  if (z == B11011010)
  {
    loca = 55;
    goto endup;
  }
  if (z == B11011011)
  {
    loca = 56;
    goto endup;
  }
  if (z == B11011001)
  {
    loca = 57;
    goto endup;
  }
  if (z == B11001010)
  {
    loca = 58;
    goto endup;
  }
  if (z == B11001011)
  {
    loca = 59;
    goto endup;
  }

  if (z == B11001100)
  {
    loca = 60;
    goto endup;
  }
  if (z == B11001101)
  {
    loca = 61;
    goto endup;
  }
  if (z == B11001111)
  {
    loca = 62;
    goto endup;
  }
  if (z == B11001110)
  {
    loca = 63;
    goto endup;
  }
  if (z == B11001000)
  {
    loca = 64;
    goto endup;
  }
  if (z == B11001001)
  {
    loca = 65;
    goto endup;
  }

  if (z == B11000100)
  {
    loca = 70;
    goto endup;
  }
  if (z == B11000110)
  {
    loca = 71;
    goto endup;
  }
  if (z == B11000111)
  {
    loca = 72;
    goto endup;
  }
  if (z == B11000010)
  {
    loca = 73;
    goto endup;
  }
  if (z == B11000101)
  {
    loca = 74;
    goto endup;
  }
  if (z == B11000011)
  {
    loca = 75;
    goto endup;
  }
  if (z == B11000001)
  {
    loca = 76;
    goto endup;
  }

endup:
  master[mi] = loca;
  mi++;

}

void key()
{
  mi = 0;

  //0
  if (master[0] == 100 && master [1] == 100 && master[2] == 100 && master[3] == 100 && master[4] == 100 )
  {
    Keyboard.print(" ");
    numflag = 0;
    goto retret;
  }

  //200
  if (master[0] == 62  && master [1] == 100 && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    numflag = 1;
  }

  //only alphabets

  //201 a
  if (master[0] == 10 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    if (numflag == 1)
    {
      Keyboard.print("1");
    }
    else
    {
      Keyboard.print("a");
    }
    goto retret;
  }

  //202 b
  if (master[0] == 11 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    if (numflag == 1)
    {
      Keyboard.print("2");
    }
    else
    {
      Keyboard.print("b");
    }
    goto retret;
  }

  // 203 c
  if (master[0] == 12 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    if (numflag == 1)
    {
      Keyboard.print("3");
    }
    else
    {
      Keyboard.print("c");
    }
    goto retret;
  }

  // 204 d
  if (master[0] == 13 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    if (numflag == 1)
    {
      Keyboard.print("4");
    }
    else
    {
      Keyboard.print("d");
    }
    goto retret;
  }

  //  205 e
  if (master[0] ==  14 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    if (numflag == 1)
    {
      Keyboard.print("5");
    }
    else
    {
      Keyboard.print("e");
    }
    goto retret;
  }

  //206 f
  if (master[0] == 15 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    if (numflag == 1)
    {
      Keyboard.print("6");
    }
    else
    {
      Keyboard.print("f");
    }
    goto retret;
  }

  //207 g
  if (master[0] == 16 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    if (numflag == 1)
    {
      Keyboard.print("7");
    }
    else
    {
      Keyboard.print("g");
    }
    goto retret;
  }

  //208 h
  if (master[0] == 17 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    if (numflag == 1)
    {
      Keyboard.print("8");
    }
    else
    {
      Keyboard.print("h");
    }
    goto retret;
  }

  //209 i
  if (master[0] == 18 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    if (numflag == 1)
    {
      Keyboard.print("9");
    }
    else
    {
      Keyboard.print("i");
    }
    goto retret;
  }

  //210 j
  if (master[0] == 19 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    if (numflag == 1)
    {
      Keyboard.print("0");
    }
    else
    {
      Keyboard.print("j");
    }
    goto retret;
  }

  //211 k
  if (master[0] == 20 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("k");
    goto retret;
  }

  //212 l
  if (master[0] == 21 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("l");
    goto retret;
  }

  //213 m
  if (master[0] == 22 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("m");
    goto retret;
  }

  //214 n
  if (master[0] == 23 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("n");
    goto retret;
  }

  //215 o
  if (master[0] == 24 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("o");
    goto retret;
  }

  //216 p
  if (master[0] == 25 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("p");
    goto retret;
  }

  //217 q
  if (master[0] == 26 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("q");
    goto retret;
  }

  //218 r
  if (master[0] == 27 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("r");
    goto retret;
  }

  //219 s
  if (master[0] == 28 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("s");
    goto retret;
  }

  //220 t
  if (master[0] == 29 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("t");
    goto retret;
  }

  //221u
  if (master[0] == 30 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("u");
    goto retret;
  }

  //222 v
  if (master[0] == 31 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("v");
    goto retret;
  }

  //223 x
  if (master[0] == 32 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("x");
    goto retret;
  }

  //224 y
  if (master[0] == 33 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("y");
    goto retret;
  }

  //225 z
  if (master[0] == 34 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {

    Keyboard.print("z");


    goto retret;
  }

  if (master[0] == 49 && master [1] == 100  && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {

    Keyboard.print("w");

    goto retret;
  }

  //punctuation marks

  //179
  if (master[0] == 64  && master [1] == 100 && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print(" \' ");
    goto retret;
  }

  //180
  if (master[0] == 58 && master [1] == 58 && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("*");
    goto retret;
  }

  //181
  if (master[0] == 76 && master [1] == 56 && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("[");
    goto retret;
  }

  //182
  if (master[0] == 56 && master [1] == 76 && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("]");
    goto retret;
  }

  //183
  if (master[0] == 52 && master [1] == 100 && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print(":");
    goto retret;
  }
  
  //184
  if (master[0] == 50  && master [1] == 100 && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print(",");
    goto retret;
  }
  
  //185
  if (master[0] == 65 && master [1] == 65 && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("--");
    goto retret;
  }
  
  //186
  if (master[0] ==  74 && master [1] == 100 && master[2] == 100 && master[3] == 100 && master[4] == 100)
  {
    Keyboard.print(".");
    goto retret;
  }
  //187
  if (master[0] == 53 && master [1] == 62 && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("$");
    goto retret;
  }
  
  //188
  if (master[0] == 64  && master [1] == 64 && master[2] == 64 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("...");
    goto retret;
  }
  
  //189
  if (master[0] == 55 && master [1] == 100 && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("!");
    goto retret;
  }
  
  //190
  if (master[0] == 65 && master [1] == 100 && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("-");
    goto retret;
  }
  
  //191
  if (master[0] == 56 && master [1] == 100 && master[2] == 100  && master[3] == 100 && master[4] == 100  )
  {
    if (paranthesis == 0)
    {
      Keyboard.print("(");
      paranthesis = 1;
    } else
    {
      Keyboard.print(")");
      paranthesis = 0;
    }
    goto retret;
  }
  
  //192
  if (master[0] == 53 && master [1] == 100 && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print(".");
    goto retret;
  }
  
  //193
  if (master[0] == 57 && master [1] == 100 && master[2] == 100 && master[3] == 100 && master[4] == 100  )
  {
    Keyboard.print("?");
    goto retret;
  }
  
retret:
  master[0] = 100;
  master[1] = 100;
  master[2] = 100;
  master[3] = 100;
  master[4] = 100;
  
}

void backspace()
{
  Keyboard.press(KEY_BACKSPACE);
  Keyboard.release(KEY_BACKSPACE);
}

void enter()
{
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
}
