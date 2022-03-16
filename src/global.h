#include "web.h"

namespace gecko {
	// Purpose: class interface to all CoinGecko 'global' functions found below
	// Refer: https://www.coingecko.com/api/documentations/v3#/global
	// Status: functional - untested
	class globalFunctions : private web {
		public:
			// Action: fetches cryptocurrency global data
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getGlobalCryptoData()
			// Notes: none
			DllExport gecko::web::response getGlobalCryptoData();

			// Action: fetches cryptocurrency global decentralized finance(defi) data
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getGlobalCryptoDefiData()
			// Notes: none
			DllExport gecko::web::response getGlobalCryptoDefiData();
	};
}