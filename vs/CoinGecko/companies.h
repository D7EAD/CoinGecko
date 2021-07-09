#include "web.h"

namespace gecko {
	// Purpose: class interface to all CoinGecko 'companies' functions found below
	// Refer: https://www.coingecko.com/api/documentations/v3#/companies
	// Status: functional - slightly tested
	class companiesFunctions : private web {
		public:
			// Action: Get public companies bitcoin or ethereum holdings
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getCompaniesData("bitcoin");
			//    getCompaniesData("ethereum");
			// Notes: none
			DllExport gecko::web::response getCompaniesData(
				REQUIRED std::string id
			);
	};
}