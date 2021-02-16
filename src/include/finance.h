#include "web.h"

namespace gecko {
	// Purpose: class interface to all CoinGecko 'finance' functions found below
	// Refer: https://www.coingecko.com/api/documentations/v3#/finance_(beta)
	// Status: beta, likely unstable - slightly tested
	class financeFunctions : private web {
		public:
			// Action: fetches all finance platforms
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    listFinancePlatforms()
			// Notes: none
			DllExport gecko::web::response listFinancePlatforms(
				OPTIONAL unsigned short per_page = 100,
				OPTIONAL unsigned short page = 1
			);

			// Action: fetches all finance platforms
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    listFinancePlatforms()
			// Notes: none
			DllExport gecko::web::response listFinanceProducts(
				OPTIONAL const char* start_at = NULL,
				OPTIONAL const char* end_at = NULL,
				OPTIONAL unsigned short per_page = 100,
				OPTIONAL unsigned short page = 1
			);
	};
}