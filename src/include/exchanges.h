#include "web.h"

namespace gecko {
	// Purpose: class interface to all CoinGecko 'exchanges' functions found below
	// Refer: https://www.coingecko.com/api/documentations/v3#/exchanges_(beta)
	// Status: beta, likely unstable - slightly tested
	class exchangesFunctions : private web {
		public:
			// Action: fetches all market exchanges
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getExchanges()
			//    getExchanges(100)
			//    getExchanges(100, 2)
			// Notes: none
			DllExport gecko::web::response getExchanges(
				OPTIONAL unsigned short per_page = 100,
				OPTIONAL unsigned short page = 1
			);

			// Action: fetches all supported market exchanges id and name
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    listExchangeInfo()
			// Notes: none
			DllExport gecko::web::response listExchangeInfo();

			// Action: fetches market exchange volume in BTC and top 100 tickers only
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getExchangeVolume("binance")
			// Notes: none
			DllExport gecko::web::response getExchangeVolume(
				REQUIRED std::string id
			);

			// Action: fetches market exchange tickers 
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getExchangeTickers("binance", NULL, true)
			//    getExchangeTickers("binance", "bitcoin")
			// Notes: none
			DllExport gecko::web::response getExchangeTickers(
				REQUIRED std::string id,
				OPTIONAL const char* coin_ids = NULL,
				OPTIONAL bool include_exchange_logo = false,
				OPTIONAL unsigned short page = 1,
				OPTIONAL std::string depth = "cost_to_move_up_usd",
				OPTIONAL std::string order = "trust_score_desc"
			);

			// Action: fetches status updates for a given market exchange (beta)
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getExchangeStatusUpdates("binance")
			//    getExchangeStatusUpdates("binance", 20)
			// Notes: function is in BETA
			DllExport gecko::web::response getExchangeStatusUpdates(
				REQUIRED std::string id,
				OPTIONAL unsigned short per_page = 100,
				OPTIONAL unsigned short page = 1
			);

			// Action: fetches volume_chart data for a given market exchange (beta)
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getExchangeVolumeChart("binance", "1")
			// Notes: function is in BETA
			DllExport gecko::web::response getExchangeVolumeChart(
				REQUIRED std::string id,
				REQUIRED std::string days
			);
	};
}