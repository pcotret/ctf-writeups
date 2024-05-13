# A simple challenge

> We have intercepted the following message and we think it has a secret flag in it. Can you decode it?

```
Vm0weE1HRXlTWGxVYTJoVllXeGFVMWx0ZEV0alZuQlhWbXQwYVUxVk5WZFpWVlUxWVZaS2RHUkVXbFpOYWtVd1dWUkdSbVF4VG5GUmJHaHBVakpvVVZkc1pEUmpNV1JIWTBWb2JGSnJTbTlXYkZaM1RVWmtXR1JIZEZOTmEzQXdWbTF3WVZaWFNuTlhiVVpoVmpOU1RGa3llRk5XTVd3MlVtMXNhVkl5WTNsV1Z6QXhaREZrVmsxWVJsWmhhelZvVld4YWNrMUdjRmhOVlhSclVteEtNVmxyWkRSWFJrcFdZa1JPVjFKc2NGUlZWRXBUVm0xS1IySkZOVk5TUlVVMQ==
```

Looks like a Base64. Tried the wonderful [basecrack](https://github.com/mufeedvh/basecrack) on it:

```bash
$ python3 basecrack.py --magic       

██████╗  █████╗ ███████╗███████╗ ██████╗██████╗  █████╗  ██████╗██╗  ██╗
██╔══██╗██╔══██╗██╔════╝██╔════╝██╔════╝██╔══██╗██╔══██╗██╔════╝██║ ██╔╝
██████╔╝███████║███████╗█████╗  ██║     ██████╔╝███████║██║     █████╔╝ 
██╔══██╗██╔══██║╚════██║██╔══╝  ██║     ██╔══██╗██╔══██║██║     ██╔═██╗ 
██████╔╝██║  ██║███████║███████╗╚██████╗██║  ██║██║  ██║╚██████╗██║  ██╗
╚═════╝ ╚═╝  ╚═╝╚══════╝╚══════╝ ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝ v3.0
    
		python basecrack.py -h [FOR HELP]

[>] Enter Encoded Base: Vm0weE1HRXlTWGxVYTJoVllXeGFVMWx0ZEV0alZuQlhWbXQwYVUxVk5WZFpWVlUxWVZaS2RHUkVXbFpOYWtVd1dWUkdSbVF4VG5GUmJHaHBVakpvVVZkc1pEUmpNV1JIWTBWb2JGSnJTbTlXYkZaM1RVWmtXR1JIZEZOTmEzQXdWbTF3WVZaWFNuTlhiVVpoVmpOU1RGa3llRk5XTVd3MlVtMXNhVkl5WTNsV1Z6QXhaREZrVmsxWVJsWmhhelZvVld4YWNrMUdjRmhOVlhSclVteEtNVmxyWkRSWFJrcFdZa1JPVjFKc2NGUlZWRXBUVm0xS1IySkZOVk5TUlVVMQ==

[-] Iteration: 1

[-] Heuristic Found Encoding To Be: Base64

[-] Decoding as Base64: Vm0xMGEySXlUa2hVYWxaU1ltdEtjVnBXVmt0aU1VNVdZVVU1YVZKdGREWlZNakUwWVRGRmQxTnFRbGhpUjJoUVdsZDRjMWRHY0VobFJrSm9WbFZ3TUZkWGRHdFNNa3AwVm1wYVZXSnNXbUZhVjNSTFkyeFNWMWw2Um1saVIyY3lWVzAxZDFkVk1YRlZhazVoVWxack1GcFhNVXRrUmxKMVlrZDRXRkpWYkROV1JscFRVVEpTVm1KR2JFNVNSRUU1

{{<<======================================================================>>}}

[-] Iteration: 2

[-] Heuristic Found Encoding To Be: Base64

[-] Decoding as Base64: Vm10a2IyTkhUalZSYmtKcVpWVktiMU5WYUU5aVJtdDZVMjE0YTFFd1NqQlhiR2hQWld4c1dGcEhlRkJoVlVwMFdXdGtSMkp0VmpaVWJsWmFaV3RLY2xSV1l6RmliR2cyVW01d1dVMXFVak5hUlZrMFpXMUtkRlJ1Ykd4WFJVbDNWRlpTUTJSVmJGbE5SREE5

{{<<======================================================================>>}}

[-] Iteration: 3

[-] Heuristic Found Encoding To Be: Base64

[-] Decoding as Base64: Vmtkb2NHTjVRbkJqZVVKb1NVaE9iRmt6U214a1EwSjBXbGhPZWxsWFpHeFBhVUp0WWtkR2JtVjZUblZaZWtKclRWYzFibGg2Um5wWU1qUjNaRVk0ZW1KdFRubGxXRUl3VFZSQ2RVbFlNRDA9

{{<<======================================================================>>}}

[-] Iteration: 4

[-] Heuristic Found Encoding To Be: Base64

[-] Decoding as Base64: VkdocGN5QnBjeUJoSUhObFkzSmxkQ0J0WlhOellXZGxPaUJtYkdGbmV6TnVZekJrTVc1blh6RnpYMjR3ZEY4emJtTnllWEIwTVRCdUlYMD0=

{{<<======================================================================>>}}

[-] Iteration: 5

[-] Heuristic Found Encoding To Be: Base64

[-] Decoding as Base64: VGhpcyBpcyBhIHNlY3JldCBtZXNzYWdlOiBmbGFnezNuYzBkMW5nXzFzX24wdF8zbmNyeXB0MTBuIX0=

{{<<======================================================================>>}}

[-] Iteration: 6

[-] Heuristic Found Encoding To Be: Base64

[-] Decoding as Base64: This is a secret message: flag{3nc0d1ng_1s_n0t_3ncrypt10n!}

{{<<======================================================================>>}}

[-] Total Iterations: 6

[-] Encoding Pattern: Base64 -> Base64 -> Base64 -> Base64 -> Base64 -> Base64

[-] Magic Decode Finished With Result: This is a secret message: flag{3nc0d1ng_1s_n0t_3ncrypt10n!}

[-] Finished in 0.0307 seconds

```

In fact, it was several iterations of Base64 :)

## Flag

```
flag{3nc0d1ng_1s_n0t_3ncrypt10n!}
```

