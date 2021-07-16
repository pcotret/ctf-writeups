# misc/Never Gonna Give You Up

CodeTiger

![img](./NeverGonnaGiveYouUp.gif)

```bash
$ binwalk -e NeverGonnaGiveYouUp.gif             
DECIMAL       HEXADECIMAL     DESCRIPTION
--------------------------------------------------------------------------------
0             0x0             GIF image data, version "89a", 267 x 200
3841367       0x3A9D57        Zip archive data, at least v2.0 to extract, compressed size: 42, uncompressed size: 41, name: flag.txt
3841537       0x3A9E01        End of Zip archive, footer length: 22
$ cat _NeverGonnaGiveYouUp.gif.extracted/flag.txt             
flag{y0u_g0t_r1ck_r0lled_h4h4_g3t_r3kt}
```

