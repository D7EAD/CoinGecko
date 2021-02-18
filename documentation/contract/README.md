<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">Documentation resources for CoinGecko's <a href="https://www.coingecko.com/api/documentations/v3#/contract">'contract'</a> API functions.</h3>
<hr>

<h2>Class</h2>

```c
namespace gecko {
  // Purpose: class interface to all CoinGecko 'contract' functions found below
  // Refer: https://www.coingecko.com/api/documentations/v3#/contract
  // Status: functional - slightly tested
  class contractFunctions : private web {
    ...
  };
}
```

<br>

<h2>Declarations</h2>
<p>Below you can find documentation for 'simple' functions.</p>

<h4><code>contract/getCoinInfoFromContract</code></h4>

```c
  // Action: fetches coin info from contract address
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getCoinInfoFromContract("ethereum", "0xc3761eb917cd790b30dad99f6cc5b4ff93c4f9ea")
  //    getCoinInfoFromContract("ethereum", "0x4363e1485764d206b01ddc9ca121030585259f6f")
  // Notes: parameter id only accepts "ethereum" as of now
  gecko::web::response getCoinInfoFromContract(
    REQUIRED std::string id,
    REQUIRED std::string contract_address
  );
```

<h4><code>contract/getContractMarketHistory</code></h4>

```c
  // Action: fetches historical market data include price, market cap, and 24h volume from a contract address 
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getContractMarketHistory("ethereum", "0x4363e1485764d206b01ddc9ca121030585259f6f", "usd", "1")
  //    getContractMarketHistory("ethereum", "0x4363e1485764d206b01ddc9ca121030585259f6f", "rub", "14")
  // Notes: none
  gecko::web::response getContractMarketHistory(
    REQUIRED std::string id,
    REQUIRED std::string contract_address,
    REQUIRED std::string vs_currency,
    REQUIRED std::string days
  );
```

<h4><code>contract/getContractMarketHistoryWithinRange</code></h4>

```c
  // Action: fetches historical market data include price, market cap, and 24h volume within a range from a contract address
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getContractMarketHistoryWithinRange("ethereum", "0x4363e1485764d206b01ddc9ca121030585259f6f", "usd", "1422577232", "1392577232")
  //    getContractMarketHistoryWithinRange("ethereum", "0x4363e1485764d206b01ddc9ca121030585259f6f", "rub", "1422577232", "1392577232")
  // Notes: parameters to and from are in UNIX timestamp format
  gecko::web::response getContractMarketHistoryWithinRange(
    REQUIRED std::string id,
    REQUIRED std::string contract_address,
    REQUIRED std::string vs_currency,
    REQUIRED std::string to,
    REQUIRED std::string from
  );
```
