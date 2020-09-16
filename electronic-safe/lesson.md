# Arduino Electronic Safe

Project from [Good Arduino Code](https://goodarduinocode.com?utm_source=wokwi&utm_medium=site&utm_campaign=electronic_safe). For more information, check out the [Electronic Safe Project Page](https://goodarduinocode.com/projects/electronic-safe?utm_source=wokwi&utm_medium=site&utm_campaign=electronic_safe).

Click on <b>Run code</b> to see it in action!

<div style="display: flex; flex-direction: column; align-items: center">
  <wokwi-lcd1602 pinList="rs:12 enable:11 d7:7 d6:8 d5:9 d4:10"></wokwi-lcd1602>
  <wokwi-membrane-keypad rows="5,4,3,2" cols="A3,A2,A1,A0"></wokwi-membrane-keypad>
  <div style="position: relative">
    <small style="position: absolute; left: 20px">Locked</small>
    <wokwi-servo pin="6"></wokwi-servo>
    <small style="position: absolute; left: 180px; top: 60px">Open</small>
  </div>
</div>
