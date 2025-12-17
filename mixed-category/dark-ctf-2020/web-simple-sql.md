# Web/Simple_SQL

> Try to find username and password

Got an URL : http://simplesql.darkarmy.xyz/

![sql1](img/sql1.png)

Nothing interesting there until we have a look at the source code:

```html
<br><!-- Try id as parameter  --> 
```

Let's try http://simplesql.darkarmy.xyz/?id=1

```
Username : LOL Password : Try
```

After a few trys, http://simplesql.darkarmy.xyz/?id=9:

```
Username : flag Password : darkCTF{it_is_very_easy_to_find}
```

