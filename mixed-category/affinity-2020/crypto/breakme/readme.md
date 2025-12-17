# BreakMe

## Challenge

I encrypted important information and lost my private key! Can you help me to recover the content of the file?

## Solution

We have an encrypted file and a **public** key. It may be an assymetric encryption scheme such as RSA. To break RSA, RsaCtfTool is a great tool : https://github.com/Ganapati/RsaCtfTool

```
./RsaCtfTool.py --publickey public.pem --uncipherfile encrypted.txt
STR : b'\x00\x02Ca1\xbc\xe8\xad\x165\xe4\xfc\x00AFFCTF{PermRecord}\n'
```

 ## Flag

```
AFFCTF{PermRecord}
```
