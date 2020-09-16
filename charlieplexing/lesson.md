# Charlieplexing Playground

Charlieplexing is a technique that lets you control a large number of LEDs using just a few 
Arduino pins. In this example, we're only using pins 2-10 to control 72 LEDs.

Each LED is connected to a different combination of pins. For instance, the top-left LED's
negative end (cathode) is connected to Arduino pin 2, and it's positive end (anode) is 
connected to pin number 3.

Click on "Run Code" to see it in action!

<div>
  <wokwi-led color="white" lightColor="red" label="2 3" cathode="2" anode="3"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="2 4" cathode="2" anode="4"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="2 5" cathode="2" anode="5"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="2 6" cathode="2" anode="6"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="2 7" cathode="2" anode="7"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="2 8" cathode="2" anode="8"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="2 9" cathode="2" anode="9"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="2 10" cathode="2" anode="10"></wokwi-led>
</div>
<div>
  <wokwi-led color="white" lightColor="red" label="3 2" cathode="3" anode="2"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="3 4" cathode="3" anode="4"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="3 5" cathode="3" anode="5"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="3 6" cathode="3" anode="6"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="3 7" cathode="3" anode="7"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="3 8" cathode="3" anode="8"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="3 9" cathode="3" anode="9"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="3 10" cathode="3" anode="10"></wokwi-led>
</div>
<div>
  <wokwi-led color="white" lightColor="red" label="4 2" cathode="4" anode="2"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="4 3" cathode="4" anode="3"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="4 5" cathode="4" anode="5"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="4 6" cathode="4" anode="6"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="4 7" cathode="4" anode="7"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="4 8" cathode="4" anode="8"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="4 9" cathode="4" anode="9"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="4 10" cathode="4" anode="10"></wokwi-led>
</div>
<div>
  <wokwi-led color="white" lightColor="red" label="5 2" cathode="5" anode="2"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="5 3" cathode="5" anode="3"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="5 4" cathode="5" anode="4"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="5 6" cathode="5" anode="6"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="5 7" cathode="5" anode="7"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="5 8" cathode="5" anode="8"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="5 9" cathode="5" anode="9"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="5 10" cathode="5" anode="10"></wokwi-led>
</div>
<div>
  <wokwi-led color="white" lightColor="red" label="6 2" cathode="6" anode="2"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="6 3" cathode="6" anode="3"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="6 4" cathode="6" anode="4"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="6 5" cathode="6" anode="5"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="6 7" cathode="6" anode="7"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="6 8" cathode="6" anode="8"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="6 9" cathode="6" anode="9"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="6 10" cathode="6" anode="10"></wokwi-led>
</div>
<div>
  <wokwi-led color="white" lightColor="red" label="7 2" cathode="7" anode="2"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="7 3" cathode="7" anode="3"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="7 4" cathode="7" anode="4"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="7 5" cathode="7" anode="5"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="7 6" cathode="7" anode="6"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="7 8" cathode="7" anode="8"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="7 9" cathode="7" anode="9"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="7 10" cathode="7" anode="10"></wokwi-led>
</div>
<div>
  <wokwi-led color="white" lightColor="red" label="8 2" cathode="8" anode="2"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="8 3" cathode="8" anode="3"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="8 4" cathode="8" anode="4"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="8 5" cathode="8" anode="5"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="8 6" cathode="8" anode="6"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="8 7" cathode="8" anode="7"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="8 9" cathode="8" anode="9"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="8 10" cathode="8" anode="10"></wokwi-led>
</div>
<div>
  <wokwi-led color="white" lightColor="red" label="9 2" cathode="9" anode="2"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="9 3" cathode="9" anode="3"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="9 4" cathode="9" anode="4"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="9 5" cathode="9" anode="5"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="9 6" cathode="9" anode="6"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="9 7" cathode="9" anode="7"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="9 8" cathode="9" anode="8"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="9 10" cathode="9" anode="10"></wokwi-led>
</div>
<div>
  <wokwi-led color="white" lightColor="red" label="10 2" cathode="10" anode="2"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="10 3" cathode="10" anode="3"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="10 4" cathode="10" anode="4"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="10 5" cathode="10" anode="5"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="10 6" cathode="10" anode="6"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="10 7" cathode="10" anode="7"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="10 8" cathode="10" anode="8"></wokwi-led>
  <wokwi-led color="white" lightColor="red" label="10 9" cathode="10" anode="9"></wokwi-led>
</div>

**Challenge**: Can you change the code to display a pattern that looks like the letter "H"? 

**Advanced challenge**: Change the code to scroll the text "HELLO!" on the LED matrix.
