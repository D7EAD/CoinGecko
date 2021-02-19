<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">Documentation resources for CoinGecko's <a href="https://www.coingecko.com/api/documentations/v3#/ndexes_(beta)">'indexes'</a> API functions.</h3>
<hr>

<h2>Class</h2>

```c
namespace gecko {
  // Purpose: class interface to all CoinGecko 'indexes' functions found below
  // Refer: https://www.coingecko.com/api/documentations/v3#/indexes_(beta)
  // Status: beta, likely unstable - untested: confusing documentation
  class indexesFunctions : private web {
    ...
  };
}
```

<br>

<h2>Declarations</h2>
<p>Below you can find documentation for 'indexes' functions.</p>

<h4><code>indexes/listIndexes</code></h4>

```c
  // Action: fetches all market indexes
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    listIndexes()
  //    listIndexes(20, 1)
  // Notes: none
  gecko::web::response listIndexes(
    OPTIONAL unsigned short per_page = 100,
    OPTIONAL unsigned short page = 1
  );
```

<h4><code>indexes/getMarketIndexByMarketIdAndIndexId</code></h4>

```c
  // Action: fetches market index by market id and index id
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getMarketIndexByMarketIdAndIndexId(market_id: get at /exchanges/list, id: get at /indexes/list)
  // Notes: none
  gecko::web::response getMarketIndexByMarketIdAndIndexId(
    REQUIRED std::string market_id,
    REQUIRED std::string id
  );
```

<h4><code>indexes/listIndexInfo</code></h4>

```c
  // Action: fetches market indexes id and name
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    listIndexInfo()
  // Notes: none
  gecko::web::response listIndexInfo();
```

<h4><code>indexes/getMarketIndexByMarketIdAndMarketIndexId</code></h4>

```c
  // Action: fetches market index by market id and market index id
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getMarketIndexByMarketIdAndMarketIndexId(market_id: refer /exchanges/list, id: refer /indexes/list)
  // Notes: none
  gecko::web::response getMarketIndexByMarketIdAndMarketIndexId(
    REQUIRED std::string market_id,
    REQUIRED std::string id
  );
```
