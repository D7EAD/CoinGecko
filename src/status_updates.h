#include "web.h"

namespace gecko {
	// Purpose: class interface to all CoinGecko 'status_updates' functions found below
	// Refer: https://www.coingecko.com/api/documentations/v3#/status_updates_(beta)
	// Status: beta, likely unstable - untested
	class status_updatesFunctions : private web {
		public:
			// Action: fetches all status_updates with data
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getStatusUpdates()
			//    getStatusUpdates(NULL, NULL, 20, 1)
			// Notes: none
			DllExport gecko::web::response getStatusUpdates(
				OPTIONAL const char* category = NULL,
				OPTIONAL const char* project_type = NULL,
				OPTIONAL unsigned short per_page = 100,
				OPTIONAL unsigned short page = 1
			);
	};
}