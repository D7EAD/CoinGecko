<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">Documentation resources for CoinGecko's <a href="https://www.coingecko.com/api/documentations/v3#/coins">'coins'</a> API functions.</h3>
<hr>

<h2>Class</h2>

```c
namespace gecko {
  // Purpose: class interface to all CoinGecko 'coins' functions found below
  // Refer: https://www.coingecko.com/api/documentations/v3#/coins
  // Status: functional - slightly tested
  class coinsFunctions : private web {
    ...
  };
}
```

<br>

<h2>Declarations</h2>
<p>Below you can find documentation for 'coins' functions.</p>

<h4><code>coins/listCoins</code></h4>

```c
  // Action: fetches all supported coin ids, names and symbols
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    listCoins(true)
  //    listCoins(false)
  // Notes: none
  gecko::web::response listCoins(REQUIRED bool include_platform);
```

<h4><code>coins/getMarkets</code></h4>

```c
  // Action: fetches all supported coins price, market cap, volume, and market related data
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getMarkets("usd")
  //    getMarkets("usd", "bitcoin")
  //    getMarkets("usd", "bitcoin,ripple,dogecoin", "24hr")
  // Notes: parameter category only supports "decentralized_finance_defi" as of now
  gecko::web::response getMarkets(
    REQUIRED std::string vs_currency,
    OPTIONAL const char* ids = NULL,
    OPTIONAL const char* price_change_percentage = NULL,
    OPTIONAL const char* category = NULL,
    OPTIONAL unsigned short page = 1,
    OPTIONAL unsigned short per_page = 100,
    OPTIONAL bool sparkline = false,
    OPTIONAL std::string order = "market_cap_desc"
  );
```

<h4><code>coins/getCoinData</code></h4>

```c
  // Action: fetches current data (name, price, market, ... including exchange tickers) for a coin
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getCoinData("bitcoin")
  //    getCoinData("ripple", false, true, false)
  // Notes: none
  gecko::web::response getCoinData(
    REQUIRED std::string id,
    OPTIONAL bool localization = true,
    OPTIONAL bool tickers = true,
    OPTIONAL bool market_data = true,
    OPTIONAL bool community_data = true,
    OPTIONAL bool developer_data = true,
    OPTIONAL bool sparkline = false
  );
```

<h4><code>coins/getCoinTickers</code></h4>

```c
  // Action: fetches coin tickers
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getCoinTickers("bitcoin")
  //    getCoinTickers("bitcoin", NULL, true)
  // Notes: none
  gecko::web::response getCoinTickers(
    REQUIRED std::string id,
    OPTIONAL const char* exchange_ids = NULL,
    OPTIONAL bool include_exchange_logo = false,
    OPTIONAL unsigned short page = 1,
    OPTIONAL std::string order = "trust_score_desc",
    OPTIONAL bool depth = false
  );
```

<h4><code>coins/getCoinHistory</code></h4>

```c
  // Action: fetches historical data (name, price, market, stats) at a given date for a coin
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getCoinHistory("bitcoin", "12-01-2019")
  //    getCoinHistory("bitcoin", "12-01-2019", true)
  // Notes: parameter date is in format "dd-mm-yyyy"
  gecko::web::response getCoinHistory(
    REQUIRED std::string id,
    REQUIRED std::string date,
    OPTIONAL bool localization = false
  );
```

<h4><code>coins/getCoinMarketHistory</code></h4>

```c
  // Action: fetch historical market data include price, market cap, and 24h volume 
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getCoinMarketHistory("ripple", "usd", "5")
  //    
  // Notes: none
  gecko::web::response getCoinMarketHistory(
    REQUIRED std::string id,
    REQUIRED std::string vs_currency,
    REQUIRED std::string days,
    OPTIONAL const char* interval = NULL 
  );
```

<h4><code>coins/getCoinMarketHistoryWithinRange</code></h4>

```c
  // Action: fetch historical market data include price, market cap, and 24h volume within a range of timestamp
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getCoinMarketHistoryWithinRange("ripple", "usd", "1422577232", "1302577232")
  // Notes: parameters to and from are in UNIX timestamp format
  gecko::web::response getCoinMarketHistoryWithinRange(
    REQUIRED std::string id,
    REQUIRED std::string vs_currency,
    REQUIRED std::string to,
    REQUIRED std::string from
  );
```

<h4><code>coins/getCoinStatusUpdates</code></h4>

```c
  // Action: fetch status updates for a given coin (beta)
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getCoinStatusUpdates("bitcoin")
  //    getCoinStatusUpdates("bitcoin", 50)
  // Notes: function is in BETA
  gecko::web::response getCoinStatusUpdates(
    REQUIRED std::string id,
    OPTIONAL unsigned short per_page = 100,
    OPTIONAL unsigned short page = 1
  );
```

<h4><code>coins/getCoinOHLC</code></h4>

```c
  // Action: fetch a given coin's OHLC (Beta)
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getCoinOHLC("bitcoin", "usd", "1")
  //    getCoinOHLC("ripple", "rub", "7")
  // Notes: function is in BETA
  gecko::web::response getCoinOHLC(
    REQUIRED std::string id,
    REQUIRED std::string vs_currency,
    REQUIRED std::string days
  );
```
