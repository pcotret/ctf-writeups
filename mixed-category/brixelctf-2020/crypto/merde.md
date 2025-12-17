# Merde

A french messenger was caught during the war He was carrying a piece of paper that read: *Vvr ktdk vl jvtzsyHBI{fnzcievs}* Upon torturing the messenger for an explaination, he only shouted 'confidentiel'!!! Too bad he died, I bet something good was in that message :(

## Walkthrough

Weird title, but we known we have to deal with a French messenger. It's probably a Vigenere cipher. We can try an automatic decipher with https://www.dcode.fr/chiffre-vigenere, it won't work... We have two solutions:

- `confidentiel` is the Vigenere key effectively used there.
- Another way is to use a known plaintext attack. We know that the flag is in the format `brixelCTF{***}`. It means that J is replaced by B, V by R, etc. This way, we can rebuild the Vigener key.

## Flag

```
brixelCTF{baguette}
```

