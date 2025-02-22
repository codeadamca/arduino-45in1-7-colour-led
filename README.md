# Arduino and a 7 Colour LED

A basic example of controlling a 7 colour LED using an Arduino.

## Arduino Code

Open up [Arduino Create](https://create.arduino.cc/editor/) and add the following code:

```cpp
int crtl =  13;

void setup()   {                
  pinMode(crtl, OUTPUT);
  digitalWrite(crtl,LOW);
}

void loop()                     
{
  digitalWrite(crtl, HIGH);
  delay(5000);
  digitalWrite(crtl, LOW);
  delay(5000);
}
```

> [View the Arduino code on Arduino Create](https://create.arduino.cc/editor/professoradam/a138a69e-3346-447d-888c-48453e31be7d/preview)

## Curcuit 

You will need to setup the following circuit using your Arduino:

![Tinkercad Circuit](_readme/tinkercad-7-colour-led.png)

> [View the Circuit on Tinkercad](https://www.tinkercad.com/things/70JidFT9pyj)

> Full tutorial URL:  
> https://codeadam.ca/learning/arduino-45in1.html

***

## Repo Resources

* [Visual Studio Code](https://code.visualstudio.com/) (or any code editor)
* [Arduino Create](https://create.arduino.cc/editor) 

<br>
<a href="https://codeadam.ca">
<img src="https://cdn.codeadam.ca/images@1.0.0/codeadam-logo-coloured-horizontal.png" width="200">
</a>
