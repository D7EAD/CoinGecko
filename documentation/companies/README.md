<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">Documentation resources for CoinGecko's <a href="https://www.coingecko.com/api/documentations/v3#/companies_(beta)">'companies'</a> API functions.</h3>
<hr>

<h2>Class</h2>

```c
namespace gecko {
  // Purpose: class interface to all CoinGecko 'companies' functions found below
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Status: functional - slightly tested
  class companiesFunctions : private web {
    ...
  };
}
```

<br>

<h2>Declarations</h2>
<p>Below you can find documentation for 'companies' functions.</p>

<h4><code>companies/getCompaniesData</code></h4>

```c
  // Action: Get public companies bitcoin or ethereum holdings
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getCompaniesData("bitcoin");
  //    getCompaniesData("ethereum");
  // Notes: none
  gecko::web::response getCompaniesData(
    REQUIRED std::string id
  );
```
