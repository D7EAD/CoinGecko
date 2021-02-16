#include "web.h"

namespace gecko {
	// Purpose: class interface to all CoinGecko 'coins' functions found below
	// Refer: https://www.coingecko.com/api/documentations/v3#/coins
	// Status: functional - slightly tested
	class coinsFunctions : private web {
		public:
			// Action: fetches all supported coin ids, names and symbols
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    listCoins(true)
			//    listCoins(false)
			// Notes: none
			gecko::web::response listCoins(REQUIRED bool include_platform);

			// Action: fetches all supported coins price, market cap, volume, and market related data
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getMarkets("usd")
			//    getMarkets("usd", "bitcoin")
			//    getMarkets("usd", "bitcoin,ripple,dogecoin", "24hr")
			// Notes: parameter category only supports "decentralized_finance_defi" as of now
			DllExport gecko::web::response getMarkets(
				REQUIRED std::string vs_currency,
				OPTIONAL const char* ids = NULL,
				OPTIONAL const char* price_change_percentage = NULL,
				OPTIONAL const char* category = NULL,
				OPTIONAL unsigned short page = 1,
				OPTIONAL unsigned short per_page = 100,
				OPTIONAL bool sparkline = false,
				OPTIONAL std::string order = "market_cap_desc"
			);

			// Action: fetches current data (name, price, market, ... including exchange tickers) for a coin
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getCoinData("bitcoin")
			//    getCoinData("ripple", false, true, false)
			// Notes: none
			DllExport gecko::web::response getCoinData(
				REQUIRED std::string id,
				OPTIONAL bool localization = true,
				OPTIONAL bool tickers = true,
				OPTIONAL bool market_data = true,
				OPTIONAL bool community_data = true,
				OPTIONAL bool developer_data = true,
				OPTIONAL bool sparkline = false
			);

			// Action: fetches coin tickers
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getCoinTickers("bitcoin")
			//    getCoinTickers("bitcoin", NULL, true)
			// Notes: none
			DllExport gecko::web::response getCoinTickers(
				REQUIRED std::string id,
				OPTIONAL const char* exchange_ids = NULL,
				OPTIONAL bool include_exchange_logo = false,
				OPTIONAL unsigned short page = 1,
				OPTIONAL std::string order = "trust_score_desc",
				OPTIONAL bool depth = false
			);

			// Action: fetches historical data (name, price, market, stats) at a given date for a coin
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getCoinHistory("bitcoin", "12-01-2019")
			//    getCoinHistory("bitcoin", "12-01-2019", true)
			// Notes: parameter date is in format "dd-mm-yyyy"
			DllExport gecko::web::response getCoinHistory(
				REQUIRED std::string id,
				REQUIRED std::string date,
				OPTIONAL bool localization = false
			);

			// Action: fetch historical market data include price, market cap, and 24h volume 
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getCoinMarketHistory("ripple", "usd", "5")
			//    
			// Notes: none
			DllExport gecko::web::response getCoinMarketHistory(
				REQUIRED std::string id,
				REQUIRED std::string vs_currency,
				REQUIRED std::string days,
				OPTIONAL const char* interval = NULL
			);

			// Action: fetch historical market data include price, market cap, and 24h volume within a range of timestamp
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getCoinMarketHistoryWithinRange("ripple", "usd", "1422577232", "1302577232")
			// Notes: parameters to and from are in UNIX timestamp format
			DllExport gecko::web::response getCoinMarketHistoryWithinRange(
				REQUIRED std::string id,
				REQUIRED std::string vs_currency,
				REQUIRED std::string to,
				REQUIRED std::string from
			);

			// Action: fetch status updates for a given coin (beta)
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getCoinStatusUpdates("bitcoin")
			//    getCoinStatusUpdates("bitcoin", 50)
			// Notes: function is in BETA
			DllExport gecko::web::response getCoinStatusUpdates(
				REQUIRED std::string id,
				OPTIONAL unsigned short per_page = 100,
				OPTIONAL unsigned short page = 1
			);

			// Action: fetch a given coin's OHLC (Beta)
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getCoinOHLC("bitcoin", "usd", "1")
			//    getCoinOHLC("ripple", "rub", "7")
			// Notes: function is in BETA
			DllExport gecko::web::response getCoinOHLC(
				REQUIRED std::string id,
				REQUIRED std::string vs_currency,
				REQUIRED std::string days
			);
	};
}