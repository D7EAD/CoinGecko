<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">Documentation resources for CoinGecko's <a href="https://www.coingecko.com/api/documentations/v3#/trending">'trending'</a> API functions.</h3>
<hr>

<h2>Class</h2>

```c
namespace gecko {
  // Purpose: class interface to all CoinGecko 'trending' functions found below
  // Refer: https://www.coingecko.com/api/documentations/v3#/trending
  // Status: functional - untested
  class trendingFunctions : private web {
    ...
  ;}
}
```

<br>

<h2>Declarations</h2>
<p>Below you can find documentation for 'trending' functions.</p>

<h4><code>trending/getTrendingCoins</code></h4>

```c
  // Action: fetches trending search coins on CoinGecko in the last 24 hours
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getTrendingCoins()
  // Notes: none
  gecko::web::response getTrendingCoins();
```
