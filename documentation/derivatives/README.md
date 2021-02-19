<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">Documentation resources for CoinGecko's <a href="https://www.coingecko.com/api/documentations/v3#/derivatives_(beta)">'derivatives'</a> API functions.</h3>
<hr>

<h2>Class</h2>

```c
namespace gecko {
  // Purpose: class interface to all CoinGecko 'derivatives' functions found below
  // Refer: https://www.coingecko.com/api/documentations/v3#/derivatives_(beta)
  // Status: beta, likely unstable - untested
  class derivativesFunctions : private web {
    ...
  };
}
```

<br>

<h2>Declarations</h2>
<p>Below you can find documentation for 'derivatives' functions.</p>

<h4><code>derivatives/listDerivativeTickers</code></h4>

```c
  // Action: fetches all derivative tickers
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    listDerivativeTickers()
  //    listDerivativeTickers("all")
  // Notes: none
  gecko::web::response listDerivativeTickers(
    OPTIONAL std::string include_tickers = "unexpired"
  );
```

<h4><code>derivatives/getDerivativeMarketExchanges</code></h4>

```c
  // Action: fetches all derivative market exchanges
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getDerivativeMarketExchanges()
  //    getDerivativeMarketExchanges("trade_volume_24h_btc_asc")
  //    getDerivativeMarketExchanges("trade_volume_24h_btc_asc", 20, 1)
  // Notes: none
  gecko::web::response getDerivativeMarketExchanges(
    OPTIONAL std::string order = "name_desc",
    OPTIONAL unsigned short per_page = 100,
    OPTIONAL unsigned short page = 1
  );
```

<h4><code>derivatives/getDerivativeExchangesData</code></h4>

```c
  // Action: fetches derivative exchange data
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getDerivativeExchangeData("bitmex")
  //    getDerivativeExchangeData("bitmex", "all")
  // Notes: none
  gecko::web::response getDerivativeExchangesData(
    REQUIRED std::string id,
    OPTIONAL std::string include_tickers = "unexpired"
  );
```

<h4><code>derivatives/getDerivativeExchangesNameAndID</code></h4>

```c
  // Action: fetches all derivative exchanges name and identifier
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getDerivativeExchangesNameAndID()
  // Notes: none
  gecko::web::response getDerivativeExchangesNameAndID();
```
