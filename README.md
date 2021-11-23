<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">A C++20 library for the cryptocurrency data provider, <a href="https://www.coingecko.com/">CoinGecko</a>.</h3>
<hr>
<h2>Description</h2>
<p>CoinGecko is a service that provides a fundamental analysis of the crypto market. As one of the largest and earliest crypto data aggregators--operating since early 2014--it currently tracks nearly 6283 tokens from more than 428 cryptocurrency exchanges. In addition to tracking price, volume and market capitalization, it tracks community growth, open-source code development, major events, and on-chain metrics. Its objective is to elevate crypto participants’ understanding of fundamental factors that drive the market.</p>

<p>With this C++ library--being one of many <a href="https://www.coingecko.com/en/api">open-source API libraries</a>--you can retrieve useful cryptocurrency and market-related information on the fly within any respective application using a simple syntax.</p>
<br>
<h2>Installation</h2>
<p>To use in your project(s), simply download the <a href="https://github.com/D7EAD/CoinGecko/releases">latest CoinGecko release</a> and link to the appropriate set of included libraries. Keep in mind that if the release you choose--or the latest available--is a pre-release, expect untested functionality.

You can find a starting point, sample code, and all other documentation within <a href="/documentation">/documentation</a>.</p>

<br>
<h2>Dependencies</h2>
CoinGecko depends on the following packages:
<ul>
  <li><a href="https://curl.se/">cURL</a> : C library for HTTP(S) things (v7.74.0#8)</li>
  <li><a href="https://github.com/whoshuu/cpr">CPR</a> : cURL wrapper to make it less monotonous (v1.6.2)</li>
  <li><a href="https://www.openssl.org/">OpenSSL</a> : to be able to make HTTPS requests (v1.1.1k#6)</li>
  <li><a href="https://github.com/madler/zlib">zlib</a> : used internally in cURL for compression (v1.2.11#10)</li>
  <li><a href="https://github.com/nlohmann/json">*nlohmann-json</a> : used to allow the user to extract response values (v3.9.1)</li>
</ul>
Notes:
<ul>
  <li><i>All dependencies used to compile CoinGecko were implemented via vcpkg.</i></li>
  <li><i>*May be removed in a future release.</i></li>  
</ul>

<br>
<h2>Structure</h2>
<p>This repository abides by the following structure:</p>
<pre>
  CoinGecko/            : root
    <a href="/src">src/</a>                   : source files directory
      <a href="/src/include">include/</a>                : header files directory
    <a href="/documentation">documentation/</a>         : base documentation folder
      <a href="/documentation/coins">coins/</a>                  : API 'coins' functions
      <a href="/documentation/contract">contract/</a>               : API 'contract' functions
      <a href="/documentation/derivatives">derivatives/</a>            : API 'derivatives' functions
      <a href="/documentation/events">events/</a>                 : API 'events' functions
      <a href="/documentation/exchange_rates">exchange_rates/</a>         : API 'exchange_rates' functions 
      <a href="/documentation/exchanges">exchanges/</a>              : API 'exchanges' functions
      <a href="/documentation/finance">finance/</a>                : API 'finance' functions
      <a href="/documentation/global">global/</a>                 : API 'global' functions
      <a href="/documentation/indexes">indexes/</a>                : API 'indexes' functions
      <a href="/documentation/simple">simple/</a>                 : API 'simple' functions
      <a href="/documentation/status_updates">status_updates/</a>         : API 'status_updates' functions
      <a href="/documentation/trending">trending/</a>               : API 'trending' functions
      <a href="/documentation/asset_platforms">asset_platforms/</a>        : API 'asset_platforms' functions
      <a href="/documentation/categories">categories/</a>             : API 'categories' functions
      <a href="/documentation/companies">companies/</a>              : API 'companies' functions
    <a href="/vs">vs/</a>                    : Visual Studio solution folder  
    <a href="/images">images/</a>                : image folder for repository
</pre>
