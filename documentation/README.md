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
<p>All functions (except ping) return a <code>gecko::web::response</code> object upon completion. You can find the object and its members below:

```c
class response {
  public:
		std::string text;
		std::string response_code;
		std::string url;
	  cpr::Response cURL_Object;
		nlohmann::json json;
};
```
<br>
<p>Below you can find a few quick examples using CoinGecko. <i>For documentation regarding individual functions, refer to the appropriate folder above.</i></p>


#### **`getCoinPrices.cpp`** -> obtains current price of several coins in USD
```c
#include "gecko.h"

int main() {
    // CoinGecko main class object
    gecko::api coinGecko;

    // check if CoinGecko API is online
    if (coinGecko.ping()) {
        // if online, get Bitcoin's most recent price in USD and print the JSON response
        gecko::web::response result = coinGecko.simple.getPrice("bitcoin,ethereum,xrp,dogecoin,monero", "usd");

        // iterate over JSON values (you can also print raw JSON via web::response's member .text)
        for (auto coin : result.json.items()) {
            std::cout << coin.key() << ": " << coin.value()["usd"] << std::endl;
        }
    }
    else {
        // if offline, print offline.
        std::cout << "CoinGecko offline!" << std::endl;
    }

    return 0;
}

/*
Example output
  bitcoin: 56041
  dogecoin: 0.218788
  ethereum: 4112.31
  monero: 227.56
*/
```

#### **`getUSMeetups.cpp`** -> obtains cryptocurrency meetups in the United States
```c
#include "gecko.h"

int main() {
  gecko::api coinGecko;
  
  if (coinGecko.ping()) {
    // print raw JSON (can also be parsed via web::response's member .json)
    std::cout << coinGecko.events.getEvents("US", "Meetups").text << std::endl;
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
  } else {
    std::cout << "CoinGecko offline!" << std::endl;
  }
  
  return 0;
}
```
