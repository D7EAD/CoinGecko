<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">Documentation resources for CoinGecko's <a href="https://www.coingecko.com/api/documentations/v3#/finance_(beta)">'finance'</a> API functions.</h3>
<hr>

<h2>Class</h2>

```c
namespace gecko {
  // Purpose: class interface to all CoinGecko 'finance' functions found below
  // Refer: https://www.coingecko.com/api/documentations/v3#/finance_(beta)
  // Status: beta, likely unstable - slightly tested
  class financeFunctions : private web {
    ...
  };
}
```

<br>

<h2>Declarations</h2>
<p>Below you can find documentation for 'finance' functions.</p>

<h4><code>finance/listFinancePlatforms</code></h4>

```c
  // Action: fetches all finance platforms
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    listFinancePlatforms()
  // Notes: none
  gecko::web::response listFinancePlatforms(
    OPTIONAL unsigned short per_page = 100,
    OPTIONAL unsigned short page = 1
  );
```

<h4><code>finance/listFinancePlatforms</code></h4>

```c
  // Action: fetches all finance products
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    listFinanceProducts()
  // Notes: none
  gecko::web::response listFinanceProducts(
    OPTIONAL const char* start_at = NULL,
    OPTIONAL const char* end_at = NULL,
    OPTIONAL unsigned short per_page = 100,
    OPTIONAL unsigned short page = 1
  );
```
