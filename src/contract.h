#include "web.h"

namespace gecko {
	// Purpose: class interface to all CoinGecko 'contract' functions found below
	// Refer: https://www.coingecko.com/api/documentations/v3#/contract
	// Status: functional - slightly tested
	class contractFunctions : private web {
		public:
			// Action: fetches coin info from contract address
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getCoinInfoFromContract("ethereum", "0xc3761eb917cd790b30dad99f6cc5b4ff93c4f9ea")
			//    getCoinInfoFromContract("ethereum", "0x4363e1485764d206b01ddc9ca121030585259f6f")
			// Notes: parameter id only accepts "ethereum" as of now
			DllExport gecko::web::response getCoinInfoFromContract(
				REQUIRED std::string id,
				REQUIRED std::string contract_address
			);

			// Action: fetches historical market data include price, market cap, and 24h volume from a contract address 
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getContractMarketHistory("ethereum", "0x4363e1485764d206b01ddc9ca121030585259f6f", "usd", "1")
			//    getContractMarketHistory("ethereum", "0x4363e1485764d206b01ddc9ca121030585259f6f", "rub", "14")
			// Notes: none
			DllExport gecko::web::response getContractMarketHistory(
				REQUIRED std::string id,
				REQUIRED std::string contract_address,
				REQUIRED std::string vs_currency,
				REQUIRED std::string days
			);

			// Action: fetches historical market data include price, market cap, and 24h volume within a range from a contract address
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getContractMarketHistoryWithinRange("ethereum", "0x4363e1485764d206b01ddc9ca121030585259f6f", "usd", "1422577232", "1392577232")
			//    getContractMarketHistoryWithinRange("ethereum", "0x4363e1485764d206b01ddc9ca121030585259f6f", "rub", "1422577232", "1392577232")
			// Notes: parameters to and from are in UNIX timestamp format
			DllExport gecko::web::response getContractMarketHistoryWithinRange(
				REQUIRED std::string id,
				REQUIRED std::string contract_address,
				REQUIRED std::string vs_currency,
				REQUIRED std::string to,
				REQUIRED std::string from
			);
	};
}