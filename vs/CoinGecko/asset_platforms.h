#include "web.h"

namespace gecko {
	// Purpose: class interface to all CoinGecko 'asset_platforms' functions found below
	// Refer: https://www.coingecko.com/api/documentations/v3#/asset_platforms
	// Status: functional - slightly tested
	class assetPlatformsFunctions : private web {
		public:
			// Action: lists all asset platforms (blockchain networks)
			// Returns: gecko::web::response
			// Refer: https://www.coingecko.com/api/documentations/v3
			// Example(s):
			//    getAssetPlatforms();
			// Notes: none
			DllExport gecko::web::response getAssetPlatforms();
	};
}