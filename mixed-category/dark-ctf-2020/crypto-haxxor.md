# Cryptography/haxXor

> you either know it or not take this and get your flag
>
> ```
> 5552415c2b3525105a4657071b3e0b5f494b034515
> ```

- The encryption scheme is: `plaintext XOR key`
- One important thing about `XOR` is its associativity: `(ct XOR pt) = key `

- Another important thing: we know the key starts with `darkCTF{` (`64 61 72 6b 43 54 46 7b` in hex). In other words, it's a partial KPA (*Known Plaintext Attack*).

```
PT = 55 52 41 5c 2b 35 25 10 5a 46 57 07 1b 3e 0b 5f 49 4b 03 45 15
Keypart = 64 61 72 6b 43 54 46 7b
PT XOR Keypart (in ASCII) = 1337hack>'%lXjM$-*q.V
```

As for other challenges, we should expect a key with some words or leetspeak:

```
PT = 55 52 41 5c 2b 35 25 10 5a 46 57 07 1b 3e 0b 5f 49 4b 03 45 15
Key (ASCII) = 1337hack
PT XOR key (ASCII) = darkCTF{kud0s_h4xx0r}
```

