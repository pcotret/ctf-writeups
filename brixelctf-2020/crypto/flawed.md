# Flawed

Our l33t hackers hacked a bulletin board and gained access to the database. We need to find the admin password.

The user's database info is:

Username:admin

Passwordhash: d269ce15f9c44bc3992a5f4e5f273e06

The flag is the plaintext password

This flag is not in the usual format, you can enter it with or without the brixelCTF{flag} format

## Walkthrough

If we're not sure of the hash type, https://www.tunnelsup.com/hash-analyzer/ tells us it's probably an MD5 that can be decoded using https://md5decrypt.net/.

## Flag

```
notsecure
```

