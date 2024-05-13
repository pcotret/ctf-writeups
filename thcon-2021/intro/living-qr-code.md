# Living QR Code

> Is it alive ? Find what is says !

![img](./img/living_QR.gif)

Export GIF frames into individual GIFs and convert to PNG.

```bash
for i in *.gif; do
    [ -f "$i" ] || break
    convert $i $i.png
done
```

Read those individual QR codes.

```bash
for i in *.png; do
    [ -f "$i" ] || break
    zbarimg -q --raw $i
done
```

We get the flag!

```
THCon21{Ba5ukumqmZIVJ2onznXkfY61YS7Cxdi6}
```

