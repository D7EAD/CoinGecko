#include "exchanges.h"

gecko::web::response gecko::exchangesFunctions::getExchanges(OPTIONAL unsigned short per_page, OPTIONAL unsigned short page) {
	cpr::Parameters p = gecko::web::buildParameters(
		NULL,
		NULL,
		NULL,
		gecko::web::__buildShortParameters(
			Shorts{
				{"per_page", per_page},
				{"page", page}
			}
		)
	);

	cpr::Response r = this->request("exchanges", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::exchangesFunctions::listExchangeInfo() {
	cpr::Response r = this->request("exchanges/list", NULL);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::exchangesFunctions::getExchangeVolume(REQUIRED std::string id) {
	cpr::Response r = this->request("exchanges/" + id, NULL);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::exchangesFunctions::getExchangeTickers(
	REQUIRED std::string id, OPTIONAL const char* coin_ids,
	OPTIONAL bool include_exchange_logo, OPTIONAL unsigned short page,
	OPTIONAL std::string depth, OPTIONAL std::string order) {

	cpr::Parameters p = gecko::web::buildParameters(
		gecko::web::__buildStringParameters(
			Strings{
				{"depth", depth},
				{"order", order}
			}
		),
		gecko::web::__buildCStringParameters(
			cStrings{
				{"coin_ids", coin_ids}
			}
		),
		gecko::web::__buildBoolParameters(
			Bools{
				{"include_exchange_logo", include_exchange_logo}
			}
		),
		gecko::web::__buildShortParameters(
			Shorts{
				{"page", page}
			}
		)
	);

	cpr::Response r = this->request("exchanges/" + id + "/tickers", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::exchangesFunctions::getExchangeStatusUpdates(REQUIRED std::string id, OPTIONAL unsigned short per_page, OPTIONAL unsigned short page) {
	cpr::Parameters p = gecko::web::buildParameters(
		NULL,
		NULL,
		NULL,
		gecko::web::__buildShortParameters(
			Shorts{
				{"per_page", per_page},
				{"page", page}
			}
		)
	);

	cpr::Response r = this->request("exchanges/" + id + "/status_updates", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::exchangesFunctions::getExchangeVolumeChart(REQUIRED std::string id, REQUIRED std::string days) {
	cpr::Parameters p = gecko::web::buildParameters(
		gecko::web::__buildStringParameters(
			Strings{
				{"days", days}
			}
		),
		NULL,
		NULL,
		NULL
	);

	cpr::Response r = this->request("exchanges/" + id + "/volume_chart", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}