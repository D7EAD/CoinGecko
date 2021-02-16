<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">A C++20 library for the cryptocurrency data provider, <a href="https://www.coingecko.com/">CoinGecko</a>.</h3>
<hr>
<h2>Description</h2>
<p>CoinGecko is a service that provides a fundamental analysis of the crypto market. As one of the largest and earliest crypto data aggregators--operating since early 2014--it currently tracks nearly 6283 tokens from more than 428 cryptocurrency exchanges. In addition to tracking price, volume and market capitalization, it tracks community growth, open-source code development, major events and on-chain metrics. Its objective is to elevate crypto participants’ understanding of fundamental factors that drive the market.</p>

<p>With this C++ library--being one of many <a href="https://www.coingecko.com/en/api">open-source API libraries</a>--you can retrieve useful cryptocurrency and market-related information on the fly within any respective application with a simple syntax.</p>
<br>
<h2>Structure</h2>
<p>This repository abides by the following structure:</p>
<pre>
  CoinGecko/            : root
    documentation/         : base documentation folder
      coins/                  : documentation for CoinGecko API 'coins' functions
      contract/               : documentation for CoinGecko API 'contract' functions
      derivatives/            : documentation for CoinGecko API 'derivatives' functions
      events/                 : documentation for CoinGecko API 'events' functions
      exchange_rates/         : documentation for CoinGecko API 'exchange_rates' functions 
      exchanges/              : documentation for CoinGecko API 'exchanges' functions
      finance/                : documentation for CoinGecko API 'finance' functions
      global/                 : documentation for CoinGecko API 'global' functions
      indexes/                : documentation for CoinGecko API 'indexes' functions
      simple/                 : documentation for CoinGecko API 'simple' functions
      status_updates/         : documentation for CoinGecko API 'status_updates' functions
      trending/               : documentation for CoinGecko API 'trending' functions
    images/                : image folder for repository
</pre>
<p>You can find a starting point and all other documentation within <code>/documentation</code>.
