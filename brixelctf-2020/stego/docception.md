# Doc-ception

Need to hide something? why not a word document? You need to dig deeper **This flag is not in the usual format, you can enter it with or without the brixelCTF{flag} format**

## Walkthrough

```bash
$ binwalk -e loremipsum.docx 
$ cd _loremipsum.docx.extracted
$ binwalk -e loremipsum.docx
$ cd _loremipsum.docx.extracted
$ cat flag.txt
```

## Flag

```
openxml
```

