#include "web.h"

namespace gecko {
	// Purpose: class interface to all CoinGecko 'exchange_rates' functions found below
	// Refer: https://www.coingecko.com/api/documentations/v3#/exchange_rates
	// Status: functional - untested
	class exchange_ratesFunctions : private web {
		public:
			// Action: fetches BTC-to-Currency exchange rates
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getExchangeRates()
			// Notes: none
			DllExport gecko::web::response getExchangeRates();
	};
}