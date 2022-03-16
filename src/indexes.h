#include "web.h"

namespace gecko {
	// Purpose: class interface to all CoinGecko 'indexes' functions found below
	// Refer: https://www.coingecko.com/api/documentations/v3#/indexes_(beta)
	// Status: beta, likely unstable - untested: confusing documentation
	class indexesFunctions : private web {
		public:
			// Action: fetches all market indexes
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    listIndexes()
			//    listIndexes(20, 1)
			// Notes: none
			DllExport gecko::web::response listIndexes(
				OPTIONAL unsigned short per_page = 100,
				OPTIONAL unsigned short page = 1
			);

			// Action: fetches market index by market id and index id
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getMarketIndexByMarketIdAndIndexId(market_id: get at /exchanges/list, id: get at /indexes/list)
			// Notes: none
			DllExport gecko::web::response getMarketIndexByMarketIdAndIndexId(
				REQUIRED std::string market_id,
				REQUIRED std::string id
			);

			// Action: fetches market indexes id and name
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    listIndexInfo()
			// Notes: none
			DllExport gecko::web::response listIndexInfo();

			// Action: fetches market index by market id and market index id
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getMarketIndexByMarketIdAndMarketIndexId(market_id: refer /exchanges/list, id: refer /indexes/list)
			// Notes: none
			DllExport gecko::web::response getMarketIndexByMarketIdAndMarketIndexId(
				REQUIRED std::string market_id,
				REQUIRED std::string id
			);
	};
}