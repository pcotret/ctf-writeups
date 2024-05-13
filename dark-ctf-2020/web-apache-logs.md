# Web/Apache Logs

> Our servers were compromised!! Can you figure out which technique they used by looking at Apache access logs. flag format: DarkCTF{}

We get some Apache logs. We can see lots of [GET and POST](https://www.w3schools.com/tags/ref_httpmethods.asp) messages in it with some private IPs. There is a log line more interesting than others:

```
192.168.32.1 - - [29/Sep/2015:03:39:46 -0400] "GET /mutillidae/index.php?page=client-side-control-challenge.php HTTP/1.1" 200 9197 "http://192.168.32.134/mutillidae/index.php?page=user-info.php&username=%27+union+all+select+1%2CString.fromCharCode%28102%2C%2B108%2C%2B97%2C%2B103%2C%2B32%2C%2B105%2C%2B115%2C%2B32%2C%2B68%2C%2B97%2C%2B114%2C%2B107%2C%2B67%2C%2B84%2C%2B70%2C%2B123%2C%2B53%2C%2B113%2C%2B108%2C%2B95%2C%2B49%2C%2B110%2C%2B106%2C%2B51%2C%2B99%2C%2B116%2C%2B49%2C%2B48%2C%2B110%2C%2B125%29%2C3+--%2B&password=&user-info-php-submit-button=View+Account+Details" "Mozilla/5.0 (Windows NT 6.3; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/45.0.2454.101 Safari/537.36"
```

First, let's decode the HTTP URL with an online decoder such as https://www.urldecoder.org/:

```
http://192.168.32.134/mutillidae/index.php?page=user-info.php&username='+union+all+select+1,String.fromCharCode(102,+108,+97,+103,+32,+105,+115,+32,+68,+97,+114,+107,+67,+84,+70,+123,+53,+113,+108,+95,+49,+110,+106,+51,+99,+116,+49,+48,+110,+125),3+--+&password=&user-info-php-submit-button=View+Account+Details
```

`String.fromCharCode()` argument can be decoded on MDN web docs https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/fromCharCode:

```javascript
console.log(String.fromCharCode(102,+108,+97,+103,+32,+105,+115,+32,+68,+97,+114,+107,+67,+84,+70,+123,+53,+113,+108,+95,+49,+110,+106,+51,+99,+116,+49,+48,+110,+125));
> "flag is DarkCTF{5ql_1nj3ct10n}"
```



