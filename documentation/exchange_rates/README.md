<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">Documentation resources for CoinGecko's <a href="https://www.coingecko.com/api/documentations/v3#/exchange_rates">'exchange_rates'</a> API functions.</h3>
<hr>

<h2>Class</h2>

```c
namespace gecko {
  // Purpose: class interface to all CoinGecko 'exchange_rates' functions found below
  // Refer: https://www.coingecko.com/api/documentations/v3#/exchange_rates
  // Status: functional - untested
  class exchange_ratesFunctions : private web {
    ...
  };
}
```

<br>

<h2>Declarations</h2>
<p>Below you can find documentation for 'exchange_rates' functions.</p>

<h4><code>exchange_rates/getExchangeRates</code></h4>

```c
  // Action: fetches BTC-to-Currency exchange rates
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getExchangeRates()
  // Notes: none
  gecko::web::response getExchangeRates();
```
