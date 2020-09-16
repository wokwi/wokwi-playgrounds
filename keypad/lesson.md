## Arduino Keypad Playground

The rows of the keypad are connected to arduino pins 2, 3, 4, and 5, and
the columns to pins 6, 7, 8, 9. See below for a full connection table.

Click "Run code" to see the demo program in action.

<div style="display:flex; flex-wrap:wrap; align-items: center">
  <wokwi-membrane-keypad rows="2,3,4,5" cols="6,7,8,9"></wokwi-membrane-keypad>
  <span style="width:16px;"></span>
  <wokwi-arduino-uno></wokwi-arduino-uno>
</div>

Pin connection list:

| Keypad pin | Arduino Pin |
|------------|-------------|
| R0         | 2           |
| R1         | 3           |
| R2         | 4           |
| R3         | 5           |
| C0         | 6           |
| C1         | 7           |
| C2         | 8           |
| C3         | 9           |

