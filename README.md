# IRF7317-selfextinction

On <a href="https://youtu.be/g1rbIG2BO0U">Youtube</a>, Ralph S Bacon explored some circuits with MOSFets that would 
have a micro processor turn off it's own power and possibly also it's other peripherals under program control.

This is a small project demonstrating the use of a IRF7317.

Circuit:

<img src="https://github.com/gitpeut/IRF7317-selfextinction/blob/master/__schematicIRF7317.JPG" />

For the test I replaced the battery with a 5V power supply, and for ESP part I used a development
board that included a 3.3V power regulator. This doesn't change the working of the circuit,
as 3.3V is enough to turn the MOSfets in the IRF7317 on and off.

As I used an ESP-01, I used RX as output, as GPIO 0 and 2 need to be High when booting, which may not be 
the case when used in this circuit.

I made a small sketch that sets the RX pin ( GPIO 3) High, flashes a led on and off 5 times and then
sets the RX pin low. See <a href="https://github.com/gitpeut/IRF7317-selfextinction/blob/master/ZelfDover.ino"> Zelfdover.ino</a>
Output of the sketch looks like this:

<img src="https://github.com/gitpeut/IRF7317-selfextinction/blob/master/zelfdover_output.JPG" />

Max current was about 70 mA while the LED was flashing. After extinguishing itself, I was not able to measure any current,
although I used a medium ok multimeter in the uA range. The IRF7317 maintained room temperature, as expected with this
minimal power usage.


