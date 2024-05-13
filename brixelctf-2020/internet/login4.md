# Login4

Whow, another one! You're good! So I  told my buddy how you managed to get the password last time, and he  fixed it. Could you check again please? http://timesink.be/login4/index.html 

## Walkthrough

The password, still in `password.txt` is processed with `atob` which is a Base64 transformation https://developer.mozilla.org/fr/docs/Web/API/WindowBase64/atob

## Flag

```
brixelCTF{even_base64_wont_make_you_secure}
```

