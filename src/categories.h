#include "web.h"

namespace gecko {
	// Purpose: class interface to all CoinGecko 'categories' functions found below
	// Refer: https://www.coingecko.com/api/documentations/v3#/categories
	// Status: functional - slightly tested
	class categoriesFunctions : private web {
		public:
			// Action: list all categories
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getCategories();
			// Notes: none
			DllExport gecko::web::response getCategories();

			// Action: list all categories with market data
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getCategoryMarketData();
			//    getCategoryMarketData("market_cap_asc");
			// Notes: none
			DllExport gecko::web::response getCategoryMarketData(
				OPTIONAL std::string order = "market_cap_desc"
			);
	};
}