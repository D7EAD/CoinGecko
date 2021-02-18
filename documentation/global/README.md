<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">Documentation resources for CoinGecko's <a href="https://www.coingecko.com/api/documentations/v3#/global">'global'</a> API functions.</h3>
<hr>

<h2>Class</h2>

```c
namespace gecko {
  // Purpose: class interface to all CoinGecko 'global' functions found below
  // Refer: https://www.coingecko.com/api/documentations/v3#/global
  // Status: functional - untested
  class globalFunctions : private web {
    ...
  };
}
```

<br>

<h2>Definitions</h2>
<p>Below you can find documentation for 'simple' functions.</p>

<h4><code>simple/getPrice</code></h4>

```c
  // Action: fetches cryptocurrency global data
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getGlobalCryptoData()
  // Notes: none
  gecko::web::response getGlobalCryptoData();
```
