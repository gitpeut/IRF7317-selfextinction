# IRF7317-selfextinction

On Youtube, Ralph Bacon explored sone circuits with MOSFets that would turn a micro processor off 
it's own power and possibly also it's other peripherals under program control.
This is a small project demonstaring the use of a IRF7317.

Circuit:

<img src="https://github.com/gitpeut/IRF7317-selfextinction/blob/master/__schematicIRF7317.JPG" />

I for the test I replaced the battery with a 5V power supply, and for ESP part I used a development
board that included a 3.3V power regulator. This doesn't change the working of the circuit,
as 3.3V is enough to turn the MOSfets in the IRF7317 on and off.
