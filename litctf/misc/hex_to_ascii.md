# misc/Hex to ASCII

You received a mysterious hexadecimal number, maybe you should try converting it to ASCII!
`666c61677b77346273317465355f346e645f7430306c355f3472335f793075725f673030645f667231336e64357d`

## Solution

```python
string="666c61677b77346273317465355f346e645f7430306c355f3472335f793075725f673030645f667231336e64357d"
byte_array = bytearray.fromhex(string)
byte_array.decode()
```

## Flag

```
flag{w4bs1te5_4nd_t00l5_4r3_y0ur_g00d_fr13nd5}
```

