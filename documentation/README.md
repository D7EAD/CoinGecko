<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">Documentation resources for the library and <a href="https://www.coingecko.com/">CoinGecko</a>'s API.</h3>
<hr>
<h2>Introduction</h2>
<p>CoinGecko's source code follows a <code>topLevelObject.memberObject.memberObjectMethod()</code> code structure (with the exception of ping) like the one below:</p>

#### **`main.cpp`**
```c
#include "topLevelClass.h"

int main() {
  topLevelClass topLevelObject;
  topLevelObject.memberObject.memberObjectMethod();
  return 0;
}
```

#### **`topLevelClass.h`**
```c
#include "otherClass1.h"
#include "otherClass2.h"

class topLevelClass {
  public: 
    otherClass1 memberObject1;
    otherClass2 memberObject2;
};
```

<br><br>
<h2>Examples</h2>
<p>Below you can find several examples of using Coingecko; all examples are extensively commented.</p>

#### **`getBitcoinPrice.cpp`**
```c
/*
  Obtains the current price of Bitcoin
*/  
#include "gecko.h"

int main() {
  // CoinGecko main class object
  gecko::api coinGecko;
  
  // check if CoinGecko API is online
  if (coinGecko.ping()) {
    // if online, get Bitcoin's most recent price in USD and print the JSON response
    std::cout << coinGecko.simple.getPrice("bitcoin", "usd").text << std::endl;
  } else {
    // if offline, print offline.
    std::cout << "CoinGecko offline!" << std::endl;
  }
  
  // exit
  return 0;
}
```
