#include "asset_platforms.h"

gecko::web::response gecko::assetPlatformsFunctions::getAssetPlatforms() {
	cpr::Response r = this->request("asset_platforms", NULL);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}