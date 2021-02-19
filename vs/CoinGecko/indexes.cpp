#include "indexes.h"

gecko::web::response gecko::indexesFunctions::listIndexes(OPTIONAL unsigned short per_page, OPTIONAL unsigned short page) {
	cpr::Parameters p = gecko::web::buildParameters(
		NULL,
		NULL,
		NULL,
		gecko::web::__buildShortParameters(
			Shorts {
				{"per_page", per_page},
				{"page", page}
			}
		)
	);

	cpr::Response r = this->request("indexes", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url},
		{r}
	};
}

gecko::web::response gecko::indexesFunctions::getMarketIndexByMarketIdAndIndexId(REQUIRED std::string market_id, REQUIRED std::string id) {
	cpr::Response r = this->request("indexes/" + market_id + "/" + id, NULL);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url},
		{r}
	};
}

gecko::web::response gecko::indexesFunctions::listIndexInfo() {
	cpr::Response r = this->request("indexes/list", NULL);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url},
		{r}
	};
}

gecko::web::response gecko::indexesFunctions::getMarketIndexByMarketIdAndMarketIndexId(REQUIRED std::string market_id, REQUIRED std::string id) {
	cpr::Response r = this->request("indexes/list_by_market_and_id/" + market_id + "/" + id, NULL);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url},
		{r}
	};
}