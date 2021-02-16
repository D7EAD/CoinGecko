/*
	Main header file : gecko.h
		includes all other header files -- should be only file #included

		The parameters of methods in function classes follow the following necessity formula:
			- REQUIRED <type>      -> TRULY REQUIRED : no values supplied by default; must be set by user
			- OPTIONAL const char* -> TRULY OPTIONAL : not included in API calls by default; default value NULL
			- OPTIONAL <type>      -> TRULY OPTIONAL : value set by default; included in API calls
*/

#include "simple.h"
#include "coins.h"
#include "contract.h"
#include "exchanges.h"
#include "finance.h"
#include "indexes.h"
#include "derivatives.h"
#include "status_updates.h"
#include "events.h"
#include "exchange_rates.h"
#include "trending.h"
#include "global.h"

// namespace containing all CoinGecko API thingies
namespace gecko {
	// Purpose: main class used to access all function classes
	// Status: functional - ping() untested
	class api : private web { // all classes
		public:
			// object for user to access the CoinGecko API 'simple' functions.
			simpleFunctions simple;

			// ... 'coins' functions ...
			coinsFunctions coins;

			// ... 'contract' functions ...
			contractFunctions contract;

			// ... 'exchanges' functions ...
			exchangesFunctions exchanges;

			// ... 'finance' functions ...
			financeFunctions finance;

			// ... 'indexes' functions ...
			indexesFunctions indexes;

			// ... 'derivatives' functions ...
			derivativesFunctions derivatives;

			// ... 'status_updates' functions ...
			status_updatesFunctions status_updates;

			// ... 'events' functions ...
			eventsFunctions events;

			// ... 'exchanges_rates' functions ...
			exchange_ratesFunctions exchange_rates;

			// ... 'trending' functions ...
			trendingFunctions trending;

			// ... 'global' functions ...
			globalFunctions global;

			// Action: checks status of CoinGecko API
			// Returns: true/false (online/offline)
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example:
			//    if (ping()) { ... } else { ... }
			// Notes: should be checked before using any API functions
			DllExport bool ping(); // just one function for 'ping', might as well put it in api.
	};
}