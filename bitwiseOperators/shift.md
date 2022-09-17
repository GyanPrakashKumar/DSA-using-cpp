# Shift operator

## 1 : Right Shift Operator (>>)
Any number Right shifted by 1 gives you number % 2

    5 >> 1 == 
=>  0101 >> 1 (LSB is removed and 0 is appended at MSB)
=>  0011 (2)

## 2 : Left Shift Operator (<<)
Any number Right shifted by 1 gives you number * 2

    5 << 1 == 1010
=>  0101 << 1 (MSB is removed and 0 is appended at LSB)
=>  1010 (10)

---

### The appended bit (0) in Left/Right shifting of positive numbers is always 0
### And in negative number it depends upon compiler

