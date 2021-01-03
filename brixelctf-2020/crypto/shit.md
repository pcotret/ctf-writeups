# Shit

A messenger droid was caught during the intergalactic war Upon investigating his memory banks, we found this message:  *MDExMTAxMDAgMDExMDEwMDAgMDExMDAxMDEgMDAxMDAwMDAgMDExMDAxMTAgMDExMDExMDAgMDExMDAwMDEgMDExMDAxMTEgMDAxMDAwMDAgMDExMDEwMDEgMDExMTAwMTEgMDAxMDAwMDAgMDExMDAwMTAgMDExMTAwMTAgMDExMDEwMDEgMDExMTEwMDAgMDExMDAxMDEgMDExMDExMDAgMDEwMDAwMTEgMDEwMTAxMDAgMDEwMDAxMTAgMDExMTEwMTEgMDExMTAwMTAgMDExMDExMTEgMDExMDAwMTAgMDExMDExMTEgMDExMDAwMTEgMDExMDExMTEgMDExMTAwMDAgMDExMTExMDE=*  We are lucky we found him, he was only 64 parsecs from his base

## Walkthrough

Something ending by `=` and 64 parsecs, that's probably a base64. If we decode it:

```
01110100 01101000 01100101 00100000 01100110 01101100 01100001 01100111 00100000 01101001 01110011 00100000 01100010 01110010 01101001 01111000 01100101 01101100 01000011 01010100 01000110 01111011 01110010 01101111 01100010 01101111 01100011 01101111 01110000 01111101
```

If we convert it to ASCII, we get the flag: https://www.rapidtables.com/convert/number/binary-to-ascii.html

## Flag

```
brixelCTF{robocop}
```

