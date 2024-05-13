# RC four

See, decrypt, submit. 

Useful Keywords: RC4(ARC4) - A good explanation is [here](https://www.geeksforgeeks.org/rc4-encryption-algorithm/). 

Download: [RC_four.zip](https://cdn.sstf.site/hpg21/RC_four.zip) 

This is a **tutorial** challenge from Hacker's Playground 2020.
If you are not sure how to solve this,
please refer to the **tutorial guide ([Eng](https://onedrive.live.com/embed?resid=F7E83213DDD289C7!2253&authkey=!AOekQp-wZMxDdfA&em=2))**.

## Solution

```python
from binascii import unhexlify
ct1,ct2=open('output.txt').read().strip().split("\n")
msg=b"RC4 is a Stream Cipher, which is very simple and fast."
ct1=unhexlify(ct1)
ct2=unhexlify(ct2)
l=min(len(ct1),len(ct2))
r=""
for (c1,m,c2) in zip(ct1,msg,ct2):
    r+=chr((c1^m) ^c2)
print(r)
```

## Flag

```
SCTF{B10ck_c1pH3r_4nd_5tr3am_ciPheR_R_5ymm3tr1c}
```

