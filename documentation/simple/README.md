<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">Documentation resources for CoinGecko's <a href="https://www.coingecko.com/api/documentations/v3#/simple">'simple'</a> API functions.</h3>
<hr>

<h2>Class</h2>

```c
namespace gecko {
  // Purpose: class interface to all CoinGecko 'simple' functions found below
  // Refer: https://www.coingecko.com/api/documentations/v3#/simple
  // Status: functional - slightly tested
  class simpleFunctions : private web {
    ...
  };
}
```

<br>

<h2>Definitions</h2>
<p>Below you can find documentation for 'simple' functions.</p>

<h4><code>simple/getPrice</code></h4>

```c
  // Action: fetches price of supplied crypto(s) with supplied ID(s) in the supplied vs_currency or currencies
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getPrice("bitcoin", "usd,rub")
  //    getPrice("bitcoin,ripple", "usd,rub", true, false, true, false)
  // Notes: none
  gecko::web::response getPrice(
  	REQUIRED std::string id,
	REQUIRED std::string vs_currencies,
	OPTIONAL bool includeMarketCap = false,
	OPTIONAL bool include24HrVol = false,
	OPTIONAL bool include24HrChange = false,
	OPTIONAL bool includeLastUpdatedAt = false
  );
```

<h4><code>simple/getTokenPrice</code></h4>

```c
  // Action: fetches current price of tokens for a given platform in any other currency that you need (using contract addresses)
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getTokenPrice("ethereum", "0x4363e1485764d206b01ddc9ca121030585259f6f", "usd")
  //    getTokenPrice("ethereum", "0x4363e1485764d206b01ddc9ca121030585259f6f", "usd", true, false, true, false)
  // Notes: parameter id only supports value "ethereum" as of now
  gecko::web::response getTokenPrice(
	REQUIRED std::string id,
	REQUIRED std::string contract_addresses,
	REQUIRED std::string vs_currencies,
	OPTIONAL bool includeMarketCap = false,
	OPTIONAL bool include24HrVol = false,
	OPTIONAL bool include24HrChange = false,
	OPTIONAL bool includeLastUpdatedAt = false
  );
```

<h4><code>simple/getSupportedVsCurrencies</code></h4>

```c
  // Action: fetches CoinGecko's supported options for parameter 'vs_currencies'
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getSupportedVsCurrencies()
  // Notes: none
  gecko::web::response getSupportedVsCurrencies();
```
