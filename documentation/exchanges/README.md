<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">Documentation resources for CoinGecko's <a href="https://www.coingecko.com/api/documentations/v3#/exchanges_(beta)">'exchanges'</a> API functions.</h3>
<hr>

<h2>Class</h2>

```c
namespace gecko {
	// Purpose: class interface to all CoinGecko 'exchanges' functions found below
	// Refer: https://www.coingecko.com/api/documentations/v3#/exchanges_(beta)
	// Status: beta, likely unstable - slightly tested
	class exchangesFunctions : private web {
    ..
  };
}
```

<br>

<h2>Declarations</h2>
<p>Below you can find documentation for 'exchanges' functions.</p>

<h4><code>exchanges/getExchanges</code></h4>

```c
  // Action: fetches all market exchanges
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getExchanges()
  //    getExchanges(100)
  //    getExchanges(100, 2)
  // Notes: none
  gecko::web::response getExchanges(
    OPTIONAL unsigned short per_page = 100,
    OPTIONAL unsigned short page = 1
  );
```

<h4><code>exchanges/listExchangeInfo</code></h4>

```c
  // Action: fetches all supported market exchanges id and name
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    listExchangeInfo()
  // Notes: none
  gecko::web::response listExchangeInfo();
```

<h4><code>exchanges/getExchangeVolume</code></h4>

```c
  // Action: fetches market exchange volume in BTC and top 100 tickers only
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getExchangeVolume("binance")
  // Notes: none
  gecko::web::response getExchangeVolume(
    REQUIRED std::string id
  );
```

<h4><code>exchanges/getExchangeTickers</code></h4>

```c
  // Action: fetches market exchange tickers 
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getExchangeTickers("binance", NULL, true)
  //    getExchangeTickers("binance", "bitcoin")
  // Notes: none
  gecko::web::response getExchangeTickers(
    REQUIRED std::string id,
    OPTIONAL const char* coin_ids = NULL,
    OPTIONAL bool include_exchange_logo = false,
    OPTIONAL unsigned short page = 1,
    OPTIONAL std::string depth = "cost_to_move_up_usd",
    OPTIONAL std::string order = "trust_score_desc"
  );
```

<h4><code>exchanges/getExchangeStatusUpdates</code></h4>

```c
  // Action: fetches status updates for a given market exchange (beta)
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getExchangeStatusUpdates("binance")
  //    getExchangeStatusUpdates("binance", 20)
  // Notes: function is in BETA
  gecko::web::response getExchangeStatusUpdates(
    REQUIRED std::string id,
    OPTIONAL unsigned short per_page = 100,
    OPTIONAL unsigned short page = 1
  );
```

<h4><code>exchanges/getExchangeVolumeChart</code></h4>

```c
  // Action: fetches volume_chart data for a given market exchange (beta)
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getExchangeVolumeChart("binance", "1")
  // Notes: function is in BETA
  gecko::web::response getExchangeVolumeChart(
    REQUIRED std::string id,
    REQUIRED std::string days
  );
```
