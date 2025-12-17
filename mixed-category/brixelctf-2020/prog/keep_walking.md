# Keep walking

This is a challenge to test your basic programming skills.

Pseudo code:

Set X = 1

Set Y = 1

Set previous answer = 1

answer = X * Y + previous answer + 3

After that => X + 1 and Y + 1 ('answer' becomes 'previous answer') and repeat this till you have X = 525.

The final answer is the value of 'answer' when X = 525. Fill it in below.

**Example:**

5 = 1 * 1 + 1 + 3

12 = 2 * 2 + 5 + 3

24 = 3 * 3 + 12 + 3

**This flag is not in the usual format, you can enter it with or without the brixelCTF{flag} format**

## Walkthrough

Quite simple, just need to read the description and write an implementation. Here is a Python example:

```python
X=1
Y=1
previous=1
for i in range(525):
    print('[X,Y]='+str(X)+'/'+str(Y))
    answer=X*Y+previous+3
    print('Answer: '+str(answer))
    X=X+1
    Y=Y+1
    previous=answer
```

## Flag

```
48373851
```

