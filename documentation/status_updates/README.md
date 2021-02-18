<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">Documentation resources for CoinGecko's <a href="https://www.coingecko.com/api/documentations/v3#/global">'status_updates'</a> API functions.</h3>
<hr>

<h2>Class</h2>

```c
namespace gecko {
  // Purpose: class interface to all CoinGecko 'status_updates' functions found below
  // Refer: https://www.coingecko.com/api/documentations/v3#/status_updates_(beta)
  // Status: beta, likely unstable - untested
  class status_updatesFunctions : private web {
    ...
  };
}
```

<br>

<h2>Declarations</h2>
<p>Below you can find documentation for 'status_updates' functions.</p>

<h4><code>status_updates/getStatusUpdates</code></h4>

```c
  // Action: fetches all status_updates with data
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getStatusUpdates()
  //    getStatusUpdates(NULL, NULL, 20, 1)
  // Notes: none
  gecko::web::response getStatusUpdates(
    OPTIONAL const char* category = NULL,
    OPTIONAL const char* project_type = NULL,
    OPTIONAL unsigned short per_page = 100,
    OPTIONAL unsigned short page = 1
  );
```
