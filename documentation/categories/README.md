<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">Documentation resources for CoinGecko's <a href="https://www.coingecko.com/api/documentations/v3#/categories">'categories'</a> API functions.</h3>
<hr>

<h2>Class</h2>

```c
namespace gecko {
  // Purpose: class interface to all CoinGecko 'categories' functions found below
  // Refer: https://www.coingecko.com/api/documentations/v3#/categories
  // Status: functional - slightly tested
  class categoriesFunctions : private web {
    ...
  };
}
```

<br>

<h2>Declarations</h2>
<p>Below you can find documentation for 'categories' functions.</p>

<h4><code>categories/getCategories</code></h4>

```c
  // Action: list all categories
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getCategories();
  // Notes: none
  gecko::web::response getCategories();
```

<h4><code>categories/getCategoryMarketData</code></h4>

```c
  // Action: list all categories with market data
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getCategoryMarketData();
  //    getCategoryMarketData("market_cap_asc");
  // Notes: none
  gecko::web::response getCategoryMarketData(
    OPTIONAL std::string order = "market_cap_desc"
  );
```
