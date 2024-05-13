# Don't be salty

Our l33t hackers hacked a bulletin board and gained access to the database. We need to find the admin password. The user's database info is:

**Username:**admin

**Passwordhash:**2bafea54caf6f8d718be0f234793a9be

**Salt:**04532@#!! 

We know from the source code that the salt is put AFTER the password, then hashed. We also know the user likes to use lowercase passwords of  only 5 characters long. The flag is the plaintext password. **This flag is not in the usual format, you can enter it with or without the brixelCTF{flag} format**

## Walkthrough

The idea to to brute force the password with a tool such as [Hashcat](https://hashcat.net/hashcat/). All informations are important:

- Salt is after the password.
- Password is in lowercase, 5 characters long.

After looking at the Hashcat documentation:

```
hashcat hash.txt -a 3 ?l?l?l?l?l -m 10 --force
hashcat (v6.1.1) starting...

[...]

Host memory required for this attack: 116 MB

2bafea54caf6f8d718be0f234793a9be:04532@#!!:brute

Session..........: hashcat
Status...........: Cracked
Hash.Name........: md5($pass.$salt)
Hash.Target......: 2bafea54caf6f8d718be0f234793a9be:04532@#!!
Time.Started.....: Sat Jan 02 19:07:37 2021, (0 secs)
Time.Estimated...: Sat Jan 02 19:07:37 2021, (0 secs)
Guess.Mask.......: ?l?l?l?l?l [5]
Guess.Queue......: 1/1 (100.00%)
Speed.#1.........: 60418.1 kH/s (7.94ms) @ Accel:256 Loops:26 Thr:8 Vec:1
Recovered........: 1/1 (100.00%) Digests
Progress.........: 1277952/11881376 (10.76%)
Rejected.........: 0/1277952 (0.00%)
Restore.Point....: 0/456976 (0.00%)
Restore.Sub.#1...: Salt:0 Amplifier:0-26 Iteration:0-26
Candidates.#1....: sarie -> xyixy
```

- `-a 3`: mask attack for a pattern with 5 lowercase (`?l`) characters https://hashcat.net/wiki/doku.php?id=mask_attack
- `-m 10`: mode to say that the salt is AFTER the password.
- `hash.txt`: the file containing the hash in the format `HASH:SALT`.
- After a few seconds, got the result!

## Flag

```
brute
```

