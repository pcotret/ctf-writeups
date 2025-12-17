# Roman encryption

We intercepted an encrypted communication that was meant to be delivered to a threat actor named Julius. Apparently his name is the key to decipher this message. Can you decipher it?

```
Csddk Rtdetp,
Qcghb ykt jko ykto ptmmkoq,
Ykt igh tps qcep bsy qk osisevs ykto oswgou: jdgl{5ta5q1qtq10h_1p_b3y}
```

Looking at the challenge name, I tried:

- [Caesar decipher](https://www.dcode.fr/caesar-cipher)
- [Vigenère decipher](https://www.dcode.fr/vigenere-cipher)

Nothing with those two algorithms... Tried an online substitution decipher https://www.guballa.de/substitution-solver:

![image-20210811091756010](img/image-20210811091756010.png)

Some characters are wrong but we get a readable text for the main part. Let's try to complete the substitution alphabet with https://www.dcode.fr/substitution-cipher

```
HELLO JULIUS,
THANK YOU FOR YOUR SUPPORT,
YOU CAN USE THIS KEY TO RECEIVE YOUR REMARD: FLAG{5UB5T1TUT10N_1S_K3Y}
```

## Flag

```
flag{5ub5t1tut10n_1s_k3y}
```

| Plain item | Coded item |
| ---------- | ---------- |
| A          | g          |
| B          | a          |
| C          | i          |
| D          | u          |
| E          | s          |
| F          | j          |
| G          | l          |
| H          | c          |
| I          | e          |
| J          | r          |
| K          | b          |
| L          | d          |
| M          | w          |
| N          | h          |
| O          | k          |
| P          | m          |
| Q          | x          |
| R          | o          |
| S          | p          |
| T          | q          |
| U          | t          |
| V          | v          |
| W          | z          |
| X          | n          |
| Y          | y          |
| Z          | f          |
| 0          | 0          |
| 1          | 1          |
| 2          | 2          |
| 3          | 3          |
| 4          | 4          |
| 5          | 5          |
| 6          | 6          |
| 7          | 7          |
| 8          | 8          |
| 9          | 9          |