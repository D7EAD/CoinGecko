#include "coins.h"

gecko::web::response gecko::coinsFunctions::listCoins(REQUIRED bool include_platform) {
	cpr::Parameters p = gecko::web::buildParameters(
		NULL,
		NULL,
		gecko::web::__buildBoolParameters(
			Bools {
				{"include_platform", include_platform}
			}
		),
		NULL
	);

	cpr::Response r = this->request("coins/list", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::coinsFunctions::getMarkets(
	REQUIRED std::string vs_currency, OPTIONAL const char* ids,
	OPTIONAL const char* price_change_percentage, OPTIONAL const char* category,
	OPTIONAL unsigned short page, OPTIONAL unsigned short per_page,
	OPTIONAL bool sparkline, OPTIONAL std::string order) {

	cpr::Parameters p = gecko::web::buildParameters(
		gecko::web::__buildStringParameters(
			Strings {
				{"vs_currency", vs_currency},
				{"order", order}
			}
		),
		gecko::web::__buildCStringParameters(
			cStrings {
				{"category", category},
				{"price_change_percentage", price_change_percentage},
				{"ids", ids}
			}
		),
		gecko::web::__buildBoolParameters(
			Bools {
				{"sparkline", sparkline}
			}
		),
		gecko::web::__buildShortParameters(
			Shorts {
				{"per_page", per_page},
				{"page", page}
			}
		)
	);

	cpr::Response r = this->request("coins/markets", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::coinsFunctions::getCoinData(
	REQUIRED std::string id, OPTIONAL bool localization,
	OPTIONAL bool tickers, OPTIONAL bool market_data,
	OPTIONAL bool community_data, OPTIONAL bool developer_data,
	OPTIONAL bool sparkline) {

	cpr::Parameters p = gecko::web::buildParameters(
		NULL,
		NULL,
		gecko::web::__buildBoolParameters(
			Bools {
				{"localization", localization},
				{"tickers", tickers},
				{"market_data", market_data},
				{"community_data", community_data},
				{"developer_data", developer_data},
				{"sparkline", sparkline}
			}
		),
		NULL
	);
	cpr::Response r = this->request("coins/" + id, &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::coinsFunctions::getCoinTickers(
	REQUIRED std::string id, OPTIONAL const char* exchange_ids,
	OPTIONAL bool include_exchange_logo, OPTIONAL unsigned short page, OPTIONAL std::string order,
	OPTIONAL bool depth) {

	cpr::Parameters p = gecko::web::buildParameters(
		gecko::web::__buildStringParameters(
			Strings {
				{"order", order}
			}
		),
		gecko::web::__buildCStringParameters(
			cStrings {
				{"exchange_ids", exchange_ids}
			}
		),
		gecko::web::__buildBoolParameters(
			Bools {
				{"include_exchange_logo", include_exchange_logo},
				{"depth", depth}
			}
		),
		gecko::web::__buildShortParameters(
			Shorts {
				{"page", page}
			}
		)
	);

	cpr::Response r = this->request("coins/" + id + "/tickers", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::coinsFunctions::getCoinHistory(REQUIRED std::string id, REQUIRED std::string date, OPTIONAL bool localization) {
	cpr::Parameters p = gecko::web::buildParameters(
		gecko::web::__buildStringParameters(
			Strings {
				{"date", date}
			}
		),
		NULL,
		gecko::web::__buildBoolParameters(
			Bools {
				{"localization", localization}
			}
		),
		NULL
	);

	cpr::Response r = this->request("coins/" + id + "/history", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::coinsFunctions::getCoinMarketHistory(
	REQUIRED std::string id, REQUIRED std::string vs_currency,
	REQUIRED std::string days, OPTIONAL const char* interval) {

	cpr::Parameters p = gecko::web::buildParameters(
		gecko::web::__buildStringParameters(
			Strings {
				{"vs_currency", vs_currency},
				{"days", days}
			}
		),
		gecko::web::__buildCStringParameters(
			cStrings {
				{"interval", interval}
			}
		),
		NULL,
		NULL
	);

	cpr::Response r = this->request("coins/" + id + "/market_chart", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::coinsFunctions::getCoinMarketHistoryWithinRange(
	REQUIRED std::string id, REQUIRED std::string vs_currency,
	REQUIRED std::string to, REQUIRED std::string from) {

	cpr::Parameters p = gecko::web::buildParameters(
		gecko::web::__buildStringParameters(
			Strings {
				{"vs_currency", vs_currency},
				{"to", to},
				{"from", from}
			}
		),
		NULL,
		NULL,
		NULL
	);

	cpr::Response r = this->request("coins/" + id + "/market_chart/range", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::coinsFunctions::getCoinStatusUpdates(REQUIRED std::string id, OPTIONAL unsigned short per_page, OPTIONAL unsigned short page) {
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

	cpr::Response r = this->request("coins/" + id + "/status_updates", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::coinsFunctions::getCoinOHLC(REQUIRED std::string id, REQUIRED std::string vs_currency, REQUIRED std::string days) {
	cpr::Parameters p = gecko::web::buildParameters(
		gecko::web::__buildStringParameters(
			Strings {
				{"vs_currency", vs_currency},
				{"days", days}
			}
		),
		NULL,
		NULL,
		NULL
	);

	cpr::Response r = this->request("coins/" + id + "/ohlc", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}