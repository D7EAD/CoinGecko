#include "trending.h"

gecko::web::response gecko::trendingFunctions::getTrendingCoins() {
	cpr::Response r = this->request("search/trending", NULL);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}