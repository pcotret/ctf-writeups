# Char Wrap

## Challenge

No description, only a binary file.

## Solution

```bash
$ file charwrap 
charwrap: ELF 64-bit LSB shared object, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, BuildID[sha1]=c4dbdaa0b6f21111def5fa448746701f32c2d7ef, for GNU/Linux 3.2.0, not stripped
$ strings charwrap
```

It contains:

```
AFFCTF{yH
ou_foundH
_somethiH
ng!}
```

`H` seems to be an endline character, we need to wrap it!

## Flag

```
AFFCTF{you_found_something!}
```