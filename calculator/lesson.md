# Arduino Calculator 🧮

Project from [Good Arduino Code](https://goodarduinocode.com?utm_source=wokwi&utm_medium=site&utm_campaign=calculator). For more information, check out the [Calculator Project Page](https://goodarduinocode.com/projects/calculator?utm_source=wokwi&utm_medium=site&utm_campaign=calculator).

Click on <b>Run code</b> to see it in action!

<div style="display: flex; flex-direction: column; align-items: center">
  <wokwi-lcd1602 pinList="rs:12 enable:11 d7:7 d6:8 d5:9 d4:10"></wokwi-lcd1602>
  <wokwi-membrane-keypad rows="5,4,3,2" cols="A3,A2,A1,A0" 
    keys='["1", "2", "3", "+", "4", "5", "6", "-", "7", "8", "9", "*", ".", "0", "=", "/"]'></wokwi-membrane-keypad>
</div>
