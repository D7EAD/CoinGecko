#include "web.h"

namespace gecko {
	// Purpose: class interface to all CoinGecko 'derivatives' functions found below
	// Refer: https://www.coingecko.com/api/documentations/v3#/derivatives_(beta)
	// Status: beta, likely unstable - untested
	class derivativesFunctions : private web {
		public:	
			// Action: fetches all derivative tickers
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    listDerivativeTickers()
			//    listDerivativeTickers("all")
			// Notes: none
			DllExport gecko::web::response listDerivativeTickers(
				OPTIONAL std::string include_tickers = "unexpired"
			);

			// Action: fetches all derivative market exchanges
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getDerivativeMarketExchanges()
			//    getDerivativeMarketExchanges("trade_volume_24h_btc_asc")
			//    getDerivativeMarketExchanges("trade_volume_24h_btc_asc", 20, 1)
			// Notes: none
			DllExport gecko::web::response getDerivativeMarketExchanges(
				OPTIONAL std::string order = "name_desc",
				OPTIONAL unsigned short per_page = 100,
				OPTIONAL unsigned short page = 1
			);

			// Action: fetches derivative exchange data
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getDerivativeExchangeData("bitmex")
			//    getDerivativeExchangeData("bitmex", "all")
			// Notes: none
			DllExport gecko::web::response getDerivativeExchangesData(
				REQUIRED std::string id,
				OPTIONAL std::string include_tickers = "unexpired"
			);

			// Action: fetches all derivative exchanges name and identifier
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getDerivativeExchangesNameAndID()
			// Notes: none
			DllExport gecko::web::response getDerivativeExchangesNameAndID();
	};
}