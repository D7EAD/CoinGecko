#include "web.h"

namespace gecko {
	// Purpose: class interface to all CoinGecko 'trending' functions found below
	// Refer: https://www.coingecko.com/api/documentations/v3#/trending
	// Status: functional - untested
	class trendingFunctions : private web {
		public:
			// Action: fetches trending search coins on CoinGecko in the last 24 hours
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getTrendingCoins()
			// Notes: none
			DllExport gecko::web::response getTrendingCoins();
	};
}