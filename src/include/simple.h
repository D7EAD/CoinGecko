#include "web.h"

namespace gecko {
	// Purpose: class interface to all CoinGecko 'simple' functions found below
	// Refer: https://www.coingecko.com/api/documentations/v3#/simple
	// Status: functional - slightly tested
	class simpleFunctions : private web {
		public:
			// Action: fetches price of supplied crypto(s) with supplied ID(s) in the supplied vs_currency or currencies
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getPrice("bitcoin", "usd,rub")
			//    getPrice("bitcoin,ripple", "usd,rub", true, false, true, false)
			// Notes: none
			DllExport gecko::web::response getPrice(
				REQUIRED std::string id,
				REQUIRED std::string vs_currencies,
				OPTIONAL bool includeMarketCap = false,
				OPTIONAL bool include24HrVol = false,
				OPTIONAL bool include24HrChange = false,
				OPTIONAL bool includeLastUpdatedAt = false
			);

			// Action: fetches current price of tokens for a given platform in any other currency that you need (using contract addresses)
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getTokenPrice("ethereum", "0x4363e1485764d206b01ddc9ca121030585259f6f", "usd")
			//    getTokenPrice("ethereum", "0x4363e1485764d206b01ddc9ca121030585259f6f", "usd", true, false, true, false)
			// Notes: parameter id only supports value "ethereum" as of now
			DllExport gecko::web::response getTokenPrice(
				REQUIRED std::string id,
				REQUIRED std::string contract_addresses,
				REQUIRED std::string vs_currencies,
				OPTIONAL bool includeMarketCap = false,
				OPTIONAL bool include24HrVol = false,
				OPTIONAL bool include24HrChange = false,
				OPTIONAL bool includeLastUpdatedAt = false
			);

			// Action: fetches CoinGecko's supported options for parameter 'vs_currencies'
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getSupportedVsCurrencies()
			// Notes: none
			DllExport gecko::web::response getSupportedVsCurrencies();
	};
}