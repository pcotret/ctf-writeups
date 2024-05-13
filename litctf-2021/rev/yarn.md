# rev/Yarn

Cats like yarn >.<

## Solution

```bash
$ file yarn     
yarn: ELF 64-bit LSB shared object, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, BuildID[sha1]=c5f040829b38941cab1db56ceff5eb5709c6ba60, for GNU/Linux 3.2.0, not stripped
$ strings yarn | grep "flag"
However, cats also love flags, and you won't find it by running this script.
Where else could the flag be hiding? Please hurry and find it for the poor kitties!
flag{y4rn_4nd_s1lk_4r3_n1c3_but_str1ngs_1s_wh4t_g0t_th3_fl4g}
```

## Flag

```
flag{y4rn_4nd_s1lk_4r3_n1c3_but_str1ngs_1s_wh4t_g0t_th3_fl4g}
```

