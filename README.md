<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">A C++20 library for the cryptocurrency data provider, <a href="https://www.coingecko.com/">CoinGecko</a>.</h3>
<hr>
<h2>Description</h2>
<p>CoinGecko is a service that provides a fundamental analysis of the crypto market. As one of the largest and earliest crypto data aggregators--operating since early 2014--it currently tracks nearly 6283 tokens from more than 428 cryptocurrency exchanges. In addition to tracking price, volume and market capitalization, it tracks community growth, open-source code development, major events and on-chain metrics. Its objective is to elevate crypto participants’ understanding of fundamental factors that drive the market.</p>

<p>With this C++ library--being one of many <a href="https://www.coingecko.com/en/api">open-source API libraries</a>--you can retrieve useful cryptocurrency and market-related information on the fly within any respective application using a simple syntax.</p>
<br>
<h2>Structure</h2>
<p>This repository abides by the following structure:</p>
<pre>
  CoinGecko/            : root
    src/                   : source files directory
      include/                : header files directory
    documentation/         : base documentation folder
      coins/                  : API 'coins' functions
      contract/               : API 'contract' functions
      derivatives/            : API 'derivatives' functions
      events/                 : API 'events' functions
      exchange_rates/         : API 'exchange_rates' functions 
      exchanges/              : API 'exchanges' functions
      finance/                : API 'finance' functions
      global/                 : API 'global' functions
      indexes/                : API 'indexes' functions
      simple/                 : API 'simple' functions
      status_updates/         : API 'status_updates' functions
      trending/               : API 'trending' functions
    lib/                   : static library folder
      x64/                   : 64-bit libraries*
      x86/                   : 32-bit libraries*
    dll/                   : dynamic library folder
      x64/                   : 64-bit libraries
      x86/                   : 32-bit libraries
    images/                : image folder for repository
*Static libraries are compressed via RAR
</pre>
<p>You can find a starting point and all other documentation within <code>/documentation</code>.
