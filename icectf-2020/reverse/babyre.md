# babyRE

Reverse engineering is simple, at least this babyRE should get you into the groove of things.

## Walkthrough

We are provided a simple binary. Let's put it in a decompiler:

```c
puts("Welcome to the flag checker 9000. Please validate your flag.");
puStack24 = (uint8_t *)0x0;
uStack16 = 0;
getline(&puStack24, &uStack16, _reloc.stdin);
puVar3 = puStack24;
iVar2 = strcspn(puStack24, 0x2045);
puVar4 = puStack24;
puVar3[iVar2] = 0;
iVar1 = strlen(puStack24);
if ((0 < iVar1) && (*puVar4 = *puVar4 ^ 0x17, puVar4 = puStack24, iVar1 != 1)) {
	iVar2 = 1;
    do {
    	puVar3 = puStack24 + iVar2;
        iVar2 = iVar2 + 1;
        *puVar3 = *puVar3 ^ 0x17;
    } while ((uint64_t)(iVar1 - 2) + 2 != iVar2);
}
iVar1 = strcmp(puVar4, "^trTCQlr#mnHg$$mnH%$\"#%j");
if (iVar1 == 0) {
	puts("Congrats!");
} else {
	puts("No :( ");
}
```

This code basically takes a hardcoded string `^trTCQlr#mnHg$$mnH%$"#%j` and it will `XOR` it with `0x17`.  The only trick is not to consider the escape character `\`: in other words, `$\"#` must be considered as `$"#"`. Otherwise, `"` would be considered as the end of the string.

## Solution

`IceCTF{e4zy_p33zy_23542}`