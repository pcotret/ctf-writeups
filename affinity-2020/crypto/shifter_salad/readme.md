# Shifter Salad

## Challenge

Johannes is trying to recover the flag, can you help him? This is what he has so far: `AGHFXK{5ai5b1cee10z}`

## Solution

We know that all flags are in the format `AFFCTF{...}`.

In this case, it can't be a simple Caesar cipher. Let's try a Vigenere cipher for `AGHFXK`with the key `AFFCTF` (https://www.dcode.fr/vigenere-cipher)

```
ABCDEF
```

Hum... Let's try a Vigenère cipher with the key `ABCDEF` on the whole input text:

```
AFFCTF{5ah5z1zaz10z}
```

With `ABCDEFG`:

```
AFFCTF{5ui5a1aba10u}
```

With the whole alphabet, we get the flag!

## Flag

```
AFFCTF{5ub5t1tut10n}
```