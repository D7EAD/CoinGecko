<p align="center">
  <img width="460" height="125" src="/images/coingecko.jpg">
</p>
<h3 align="center">Documentation resources for the library and <a href="https://www.coingecko.com/">CoinGecko</a>'s API.</h3>
<hr>
<h2>Introduction</h2>
<p>CoinGecko's source code follows an <code>object.memberObject.memberObjectMethod()</code> code structure (with the exception of ping) like below:</p>

#### **`main.cpp`**
```c
#include "parentClass.h"

int main() {
  parentClass object;
  object.memberObject1.memberObjectMethod();
  object.memberObject2.memberObjectMethod();
  return 0;
}
```

#### **`parentClass.h`**
```c
#include "childClass1.h"
#include "childClass2.h"

class parentClass {
  public: 
    childClass1 memberObject1;
    childClass2 memberObject2;
};
```

<br><br>
<h2>Examples</h2>
<p>Below you can find a few quick examples using CoinGecko.</p>

#### **`getBitcoinPrice.cpp`** -> obtains current price of Bitcoin in USD
```c
#include "gecko.h"

int main() {
  // CoinGecko main class object
  gecko::api coinGecko;
  
  // check if CoinGecko API is online
  if (coinGecko.ping()) {
    // if online, get Bitcoin's most recent price in USD and print the JSON response
    std::cout << coinGecko.simple.getPrice("bitcoin", "usd").text << std::endl;
    // getPrice(id, vs_currency, includeMarketCap[def:false], include24HrVol[def:false], include24HrChange[def:false], includeLastUpdatedAt[def:false])
  } else {
    // if offline, print offline.
    std::cout << "CoinGecko offline!" << std::endl;
  }
  
  return 0;
}
```

#### **`getUSMeetups.cpp`** -> obtains cryptocurrency meetups in the United States
```c
#include "gecko.h"

int main() {
  gecko::api coinGecko;
  
  if (coinGecko.ping()) {
    std::cout << coinGecko.events.getEvents("US", "Meetups").text << std::endl;
    // getEvents(country_code[def:"US"], type[def:"Conference"], page[def:1], upcoming_events_only[def:false], from_date[def:NULL], to_date[def:NULL])
  } else {
    std::cout << "CoinGecko offline!" << std::endl;
  }
  
  return 0;
}
```

#### **`getContractHistoricalData.cpp`** -> obtains historical market data from contract address
```c
#include "gecko.h"

int main() {
  gecko::api coinGecko;
  
  if (coinGecko.ping()) {
    std::cout << coinGecko.contract.getContractMarketHistory("ethereum", "0x4363e1485764d206b01ddc9ca121030585259f6f", "usd", "1").text << std::endl;
    // getContractMarketHistory(id, contract_address, vs_currency, days)
  } else {
    std::cout << "CoinGecko offline!" << std::endl;
  }
  
  return 0;
}
```
