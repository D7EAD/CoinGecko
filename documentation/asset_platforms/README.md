<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">Documentation resources for CoinGecko's <a href="https://www.coingecko.com/api/documentations/v3#/asset_platforms">'asset_platforms'</a> API functions.</h3>
<hr>

<h2>Class</h2>

```c
namespace gecko {
  // Purpose: class interface to all CoinGecko 'asset_platforms' functions found below
  // Refer: https://www.coingecko.com/api/documentations/v3#/asset_platforms
  // Status: functional - slightly tested
  class assetPlatformsFunctions : private web {
    ...
  };
}
```

<br>

<h2>Declarations</h2>
<p>Below you can find documentation for 'exchange_rates' functions.</p>

<h4><code>asset_platforms/getAssetPlatforms</code></h4>

```c
  // Action: lists all asset platforms (blockchain networks)
  // Returns: gecko::web::response
  // Refer: https://www.coingecko.com/api/documentations/v3
  // Example(s):
  //    getAssetPlatforms();
  // Notes: none
  gecko::web::response getAssetPlatforms();
```
