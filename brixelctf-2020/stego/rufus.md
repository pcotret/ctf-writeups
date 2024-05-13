# Rufus the vampire cat

This is a picture of Rufus the vampire cat Despite being cute, Rufus hides a secret, up to you to find it **This flag is not in the usual format, you can enter it with or without the brixelCTF{flag} format**

## Walkthrough

```bash
$ steghide info rufus.jpg 
"rufus.jpg":
  format: jpeg
  capacity: 8,5 KB
Try to get information about embedded data ? (y/n) y
Enter passphrase: 
  embedded file "steganopayload639.txt":
    size: 85,0 Byte
    encrypted: rijndael-128, cbc
    compressed: yes
```

https://futureboy.us/stegano/decinput.html is a very helpful online decoder

```
You thought this was a cute cat picture? NOPE! Chuck Testa! (the flag is: chucktesta)
```

## Flag

```
chucktesta
```

