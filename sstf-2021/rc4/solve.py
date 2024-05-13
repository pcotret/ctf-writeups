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