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
    <a href="/lib">lib/</a>                   : static library folder
      <a href="/lib/x64">x64/</a>                   : 64-bit libraries*
      <a href="/lib/x86">x86/</a>                   : 32-bit libraries*
    <a href="/dll">dll/</a>                   : dynamic library folder
      <a href="/dll/x64">x64/</a>                   : 64-bit libraries
      <a href="/dll/x86">x86/</a>                   : 32-bit libraries
    <a href="/images">images/</a>                : image folder for repository
*Static libraries are compressed via RAR
</pre>
<p>You can find a starting point and all other documentation within <a href="/documentation">/documentation</a>.
